/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   microshell.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:15:17 by shackbei          #+#    #+#             */
/*   Updated: 2025/12/11 15:55:03 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "stdlib.h"
#include "string.h"
#include <sys/wait.h>

void print(char *str, char *arg){
	int i = 0;
	while(str[i])
		write(2, &str[i++], 1);
	i = 0;
	if (arg)
		while (arg[i])
			write(2, &arg[i++], 1);
	write(2, "\n", 1);
}

void exec(char **av, int i, int tmp_fd, char **env){
	av[i] = NULL;
	dup2(tmp_fd, STDIN_FILENO);
	close(tmp_fd);
	execve(av[0], av, env);
	print("", av[0]);
	exit(1);
}

int main(int ac, char **av, char **env){
	int i = 0;
	int tmp_fd = dup(STDIN_FILENO);
	int fd[2];
	(void)ac;

	while(av[i] && av[i + 1]){
		av = &av[i + 1];
		i = 0;

		while(av[i] && strcmp(av[i], ";") && strcmp(av[i], "|"))
			i++;
		if(av[i] && strcmp(av[i], "cd") == 0){
			if (i != 2)
				print("", NULL);
			else if (chdir(av[1]) != 0)
				print("", av[1]);
		}
		else if(i != 0 && (av[i] == NULL || strcmp(av[i], ";") == 0)){
			if(fork() == 0)
				exec(av, i, tmp_fd, env);
			else{
				close(tmp_fd);
				while (waitpid(-1, NULL, WUNTRACED) != -1)
					;
				tmp_fd = dup(STDIN_FILENO);
			}
		}
		else if(i != 0 && strcmp(av[i], "|") == 0){
			pipe(fd);
			if(fork() == 0){
				dup2(fd[1], STDOUT_FILENO);
				close(fd[1]);
				close(fd[0]);
				exec(av, i, tmp_fd, env);
			}
			else{
				close(fd[1]);
				close(tmp_fd);
				tmp_fd = fd[0];
			}
		}
	}
	close(tmp_fd);
	return(0);
}
