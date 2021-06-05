SRC_FILES = linked_list.c ReadLine.c Hash_map.c main.c
CC_FLAGS = -std=c99 -Wall -g -Wextra -lX11
CC = gcc

all:
	bash print_text.sh
	${CC} ${SRC_FILES} ${CC_FLAGS} -o has_map.o

clean:
	rm -rf *~ *.o *.out
