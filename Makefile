CC=g++

CFLAGS=-lsfml-graphics -lsfml-window -lsfml-system


all: main


main: main.o mario.o
	$(CC) main.o mario.o -o mario_game $(CFLAGS)
	
main.o: main.cpp 
	$(CC) -c main.cpp

mario.o: 
	$(CC) -c mario.cpp

clean:
	rm -rf *.o mario_game

