#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BOARDSIZE 37

//Function Prototypes
//in main
char makeCharacterUpper(char charInput);
int isValidInput(char userInput, char *gameBoard, unsigned int debugModeFlag);

void displayLogo();
void displayInstructions();
void displayProgramInfo();
void displayLicense();

int createBoard(char *gameBoard, unsigned int currentStage);
void drawBoard(char *gameBoard);

void moveOneSquare(char userVehicle, char userDirection, char *n1, char *n2, char *n3, char *n4, char *n5, char *n6);

void handlePieces(char userVehicle, char userDirection, int userDistance, char *n1, char *n2, char *n3, char *n4, char *n5, char *n6);

void makeMove(char userVehicle, char userDirection, int userDistance, int currentStage, char *gameBoard);
