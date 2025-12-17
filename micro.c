/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   micro.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 08:57:49 by nsmail            #+#    #+#             */
/*   Updated: 2025/12/10 18:05:22 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>   // pour write, dup, dup2, close, fork, execve, chdir
#include <string.h>   // pour strcmp
#include <stdlib.h>   // pour exit
#include <sys/wait.h> // pour waitpid

// Fonction utilitaire : affiche un message d'erreur sur stderr (fd 2)
// str = premier morceau du message
// arg = deuxième morceau optionnel (peut être NULL)
void ft_putstr_fd2(char *str, char *arg){
    int i = 0;
    while (str[i])
        write(2, &str[i++], 1);         // écrit caractère par caractère sur stderr
    i = 0;
    if (arg)
        while (arg[i])
            write(2, &arg[i++], 1);     // ajoute le deuxième argument si présent
    write(2, "\n", 1);                  // retour à la ligne
}

                                    //   Fonction d'exécution : prépare et lance une commande
                                    // av = tableau d'arguments (commande + params)
                                    // i = index où placer NULL (fin de la commande)
                                    // tmp_fd = file descriptor à rediriger vers stdin (pour les pipes)
                                    // env = environnement à passer à execve
void ft_execute(char **av, int i, int tmp_fd, char **env){
    av[i] = NULL;                   // termine le tableau d'arguments (requis par execve)
    dup2(tmp_fd, STDIN_FILENO);     // redirige tmp_fd vers stdin (pour lire depuis le pipe précédent)
    close(tmp_fd);                  // ferme le fd original (évite les fuites)
    execve(av[0], av, env);         // remplace le processus actuel par la commande
                                    // Si execve échoue (sinon on ne revient jamais ici) :
    ft_putstr_fd2("error: cannot execute ", av[0]);  // affiche l'erreur
    exit(1);                        // termine le processus fils avec code d'erreur
}

int main(int ac, char **av, char **env){
    int i = 0;                          // index pour parcourir les arguments
    int fd[2];                          // tableau pour pipe : fd[0]=lecture, fd[1]=écriture
    int tmp_fd = dup(STDIN_FILENO);     // sauvegarde stdin original (point de départ pour les pipes)
    (void)ac;                           // ac non utilisé, évite le warning

                                        // Boucle principale : parcourt tous les arguments
    while(av[i] && av[i + 1]){          // tant qu'il reste des arguments
        av = &av[i + 1];                // décale le pointeur av pour pointer sur la prochaine commande
        i = 0;                          // réinitialise l'index pour la nouvelle commande

        // Trouve la fin de la commande courante (cherche ";" ou "|" ou fin du tableau)
        while (av[i] && strcmp(av[i], ";") && strcmp(av[i], "|"))
            i++; // i pointe maintenant sur ";", "|" ou est égal à la longueur de la commande
        
        // CAS 1 : Commande "cd" (built-in, exécutée dans le processus parent)
        if (strcmp(av[0], "cd") == 0){
            if (i != 2)  // cd doit avoir exactement 1 argument (av[0]="cd", av[1]=path, av[2]=NULL ou delim)
                ft_putstr_fd2("error: cd: bad arguments", NULL);
            else if (chdir(av[1]) != 0)  // tente de changer de répertoire (BUG: devrait être av[1] pas av[i])
                ft_putstr_fd2("error: cd: cannot change directory to ", av[1]);
        }
        // CAS 2 : Commande normale suivie de ";" ou fin (pas de pipe)
        else if (i != 0 && (av[i] == NULL || strcmp(av[i], ";") == 0)){
            if (fork() == 0)                        // crée un processus fils
                ft_execute(av, i, tmp_fd, env);     // le fils exécute la commande
            else{                                   // processus parent
                close(tmp_fd);                      // ferme le fd de lecture du pipe précédent
                while (waitpid(-1, NULL, WUNTRACED) != -1)  // attend tous les fils terminés
                    ;
                tmp_fd = dup(STDIN_FILENO);         // réinitialise tmp_fd à stdin pour la prochaine commande
            }
        }
        // CAS 3 : Commande suivie de "|" (pipe vers la commande suivante)
        else if (i != 0 && strcmp(av[i], "|") == 0){
            pipe(fd);                               // crée un pipe : fd[0]=lecture, fd[1]=écriture
            if (fork() == 0){                       // processus fils
                dup2(fd[1], STDOUT_FILENO);         // redirige stdout vers l'écriture du pipe
                close(fd[1]);                       // ferme le fd original après duplication
                close(fd[0]);                       // ferme l'extrémité lecture (non utilisée par ce fils)
                ft_execute(av, i, tmp_fd, env);     // exécute la commande
            }
            else {                                  // processus parent
                close(fd[1]);                       // ferme l'extrémité écriture (utilisée uniquement par le fils)
                close(tmp_fd);                      // ferme l'ancien fd de lecture
                tmp_fd = fd[0];                     // le nouveau tmp_fd devient la lecture du pipe (pour la prochaine commande)
            }
        }
    }
    close(tmp_fd);                                  // ferme le dernier fd temporaire
    return(0);                                      // fin du programme
}