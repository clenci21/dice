.SILENT:
CC = gcc
FLAGS = -Wall -Werror -Wextra

build: main.c
	$(CC) $(FLAGS) main.c -o dice_c
clean:
	rm dice_c
