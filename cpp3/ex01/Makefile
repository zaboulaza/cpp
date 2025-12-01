SRCS =	main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp

CC =	c++ -Wall -Wextra -Werror -std=c++98
NAME =	 ClapTrap
OBJS =	$(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS)  -o $(NAME)
	@echo "done !"

%.o : %.cpp
	@$(CC) -c $< -o $@
	@echo "compiling: $<"

clean :
	@rm -f $(OBJS)

fclean : clean
	@rm -f $(NAME)

re : fclean all