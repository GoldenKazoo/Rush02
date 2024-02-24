NAME = rush-02 

CFLAGS = -Wall -Wextra -Werror

SRCS = main.c \
		string_fn.c \

OBJS = ${SRCS:.c=.o}

all: ${NAME}

${NAME}: 
		cc ${CFLAGS} -o ${NAME} ${SRCS}


clean:
		-rm -f *.o

fclen: clean
		-rm -f ${NAME}

re : fclen all