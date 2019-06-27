#include <stdio.h>
#include <string.h> //??Not sure if I am even using this library

//Function Prototypes
void displayInstructions();

int createBoard(unsigned char *gameBoard, unsigned int currentStage);
void drawBoard(unsigned char *gameBoard);

void moveOneSquare(unsigned char userVehicle, unsigned char userDirection, unsigned char *n1, unsigned char *n2, unsigned char *n3, unsigned char *n4, unsigned char *n5, unsigned char *n6);

void handlePieces(unsigned char userVehicle, unsigned char userDirection, unsigned int userDistance, unsigned char *n1, unsigned char *n2, unsigned char *n3, unsigned char *n4, unsigned char *n5, unsigned char *n6);

void makeMove(unsigned char userVehicle, unsigned char userDirection, unsigned int userDistance, unsigned int currentStage, unsigned char *gameBoard);
