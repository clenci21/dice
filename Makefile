.SILENT:
CC = gcc
FLAGS = -Wall -Werror -Wextra

build: main.c
	$(CC) $(FLAGS) main.c -o dice.c
clean:
	rm dice.c
