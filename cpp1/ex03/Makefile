SRCS =	main.cpp \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp 

CC =	c++ -Wall -Werror -Wextra -std=c++98
NAME =	Unnecessary_violence
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