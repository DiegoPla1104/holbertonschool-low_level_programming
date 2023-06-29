CC = gcc -c
SRC = $(wildcard *.c)
OBJ = ${SRC:.c=.o}
RM = rm
AR = ar rc
LIB = liball.a

all: ${OBJ}
		${CC} ${OBJ} -o

clean:
	${RM} -f ${OBJ}

libr: ${OBJ}
	${AR} ${LIB} ${OBJ}
