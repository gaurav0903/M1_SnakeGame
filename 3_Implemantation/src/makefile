PROJ_NAME = Snake Game
SRC = main.c game.c game.h

all: mian test 
#compile all .c files into .o files
# % matches all (like * in a command)
# $< is the source file (.c file)
%.o : %.c
    $(CC) -c $(CCFLAGS) $<
    
main: main.o game.o
    $(CC) -o main.o game.o
    
test: main
    ./main