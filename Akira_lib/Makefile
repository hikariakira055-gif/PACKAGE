CC = gcc
FLAGS = -Wall -Wextra -Werror 
TARGETS = prog
SRC  = 	src/binary.c \
 		src/Vector2D.c \
 		src/Vector3D.c \
		src/Vector.c \
		src/char_chain.c \
		src/mathlab.c main.c

all : $(TARGETS)

$(TARGETS): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(TARGETS)

clean :
	rm prog 