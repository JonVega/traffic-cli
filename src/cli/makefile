all: traffic clean
	
traffic: main.o board.o pieceMovement.o programInfo.o
	gcc main.o board.o pieceMovement.o programInfo.o -o traffic
	
main.o: main.c traffic.h
	gcc -c main.c
	
board.o: board.c traffic.h
	gcc -c board.c
	
pieceMovement.o: pieceMovement.c traffic.h
	gcc -c pieceMovement.c

programInfo.o: programInfo.c traffic.h
	gcc -c programInfo.c

clean:
	rm *.o