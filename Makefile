NAME = libft.a

CC =	gcc
CFLAGS =	-Wall -Wextra -Werror 

SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
HEADER = libft.h 


all: $(NAME)

#$(NAME): $(OBJS)
#	@echo "Linking..."
#	$(CC) $(CFLAGS) $(OBJS) -o Program.exe


$(NAME): $(OBJS)
	@echo "Linking..."
	ar rcs $(NAME) $(OBJS)

%.o:%.c $(HEADER)
	@echo "Compilin $<"
	$(CC) $(CFLAGS) -c $< -o $@



.PHONY: all clean
clean:
	del *.o 
fclean: clean
	del *.exe

re: fclean all



#f.o : f.c
	#@echo "Compiling f.c"
	#gcc $(CFLAGS) -c f.c

#main.o : main.c
	#@echo "Compiling main.c"
	#gcc $(CFLAGS) -c main.c

#faress.o : faress.c
	#@echo "Compiling faress.c"
	#gcc $(CFLAGS) -c faress.c
