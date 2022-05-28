/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Traffic (version 1.0) - logic puzzle game for the command-line
 * 
 * author: Jonathan Vega
 * purpose:	A fun little game to challenge your mind using logic
 * usage: run the program and instructions will appear
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "traffic.h"

char makeCharacterUpper(char charInput) {
	return charInput = charInput - 32;
}

int isValidInput(char userInput, char *gameBoard, unsigned int debugModeFlag) {
	if(debugModeFlag == 1) {
		printf("<ASCII CODE: %d + CHAR: %c>\n", userInput, userInput);
	}
	for(int i = 0; i < 36; i++) {
		if(userInput == gameBoard[i]) {
			if(userInput == '.') {
				return 0;
			}
			else {
				return 1;
			}
		}
	}
	
	if(userInput == 'U' || userInput == 'D' || userInput == 'L' || userInput == 'R' || userInput == '+' || userInput == 'Q' || userInput == 'X' || userInput == '?' || userInput == '-' || userInput == '@') {
		return 1;
	}
	
	else {
		return 0;
	}
}

/* MAIN */
int main(int argc, char **argv) {
	
/* VARIABLES */
	char gameBoard[BOARDSIZE];
	unsigned int currentStage = 1;
	unsigned int numberMovesAttempted = 0;
	unsigned int debugModeFlag = 0;
	
	char userVehicle = '\0';
	char userDirection = '\0';
	unsigned int userDistance = 0;
	
/* PROGRAM ARGUMENTS */
	//display program version
	if(argc > 1) {
		if ( (!strcmp(argv[1], "-v")) || (!strcmp(argv[1], "--version")) ) {
			printf("version 1.0\n");
			return 0;
		}
		
		else if(!strcmp(argv[1], "-d")) {
			debugModeFlag = 1;
		}
		
		else {
			currentStage = atoi(argv[1]);
		}
	}
/* CREATE BOARD */
	//create board and layout pieces
	if(createBoard(gameBoard, currentStage) != 0) {
		return 1; //FATAL ERROR - EXIT PROGRAM
	}
	
	if(debugModeFlag != 1) {
		displayLogo();
	}
	
	else {
		printf("<BOARD STRING: %s>\n", gameBoard);
	}
	
/* MAIN PROGRAM LOOP */
	while(userVehicle != 'X') { //exits loop & terminates
		
		//print the board and pieces to the screen
		printf("  < stage %d >\n", currentStage);
		drawBoard(gameBoard);
		//display if in DEBUG MODE
		if(debugModeFlag == 1) {
			printf("<DEBUG MODE> - ");
		}
		printf("Attempts: %d | >> ", numberMovesAttempted);
		fflush(stdin); //clear buffer if user enters multiple chars
		
/* VEHICLE */
		scanf(" %c", &userVehicle);
		//if vehicle from A-Z is lower-case, then make upper-case
		if(userVehicle > 96 && userVehicle < 123) {
			userVehicle = makeCharacterUpper(userVehicle);
		}		
		
		//check if vehicle is valid move from ALL moves in program
		if(isValidInput(userVehicle, gameBoard, debugModeFlag) == 1) {
			//exit the program
			if(userVehicle == 'X' || userVehicle == 'Q') {			
				break;
			}
		
			//show instructions
			else if(userVehicle == '?') {
				displayInstructions();
				continue;
			}
			
			else if(userVehicle == '@') {
				displayLicense();
				displayProgramInfo();
				continue;
			}
		
			//reset the current board
			else if(userVehicle == '-') {
				if(createBoard(gameBoard, currentStage) != 0) {
					return 1;
				}
				numberMovesAttempted = 0; //reset the counter
				continue;
			}
			
			else if(userVehicle == '+') {
				printf("Custom Board Creation\n");
				printf("[enter 36 characters - blanks are a '.']\n\n>> ");
				for(int i = 0; i < 36; i++) {
					scanf(" %c", &userVehicle);
					gameBoard[i] = userVehicle;
				}
				currentStage = 0;
				numberMovesAttempted = 0; //reset the counter
				continue;
			}
		}
		
		else {
			printf("!!! INVALID VEHICLE !!!\n\n");
			continue;
		}
		
/* DIRECTION */
		scanf(" %c", &userDirection);
		//check if vehicle is valid move from ALL moves in program
		if(userDirection > 96 && userDirection < 123) {
			userDirection = makeCharacterUpper(userDirection);
		}
		
		if(isValidInput(userDirection, gameBoard, debugModeFlag) != 1) {
			printf("!!! INVALID DIRECTION !!!\n\n");
			continue;
		}
		
/* DISTANCE */
		scanf(" %d", &userDistance);
		
		//expects input from 1 to 9
		if(!(userDistance > 0) || !(userDistance < 10)) {
			printf("!!! INVALID DISTANCE !!!\n\n");
			continue;
		}
		
		//attempt piece movement
		makeMove(userVehicle, userDirection, userDistance, currentStage, gameBoard);
		
		numberMovesAttempted++;
		
		//when the RED car reaches the goal
		if(gameBoard[17] == 'R') {
			currentStage++;
			printf("\nStage %d Complete  -  # of Attempts: %d\n\n",currentStage-1, numberMovesAttempted);
			numberMovesAttempted = 0;
			
			if(createBoard(gameBoard, currentStage) != 0) {
				return 1;
			}
		}
		
	}
	printf("\nbye-bye!\n\n");
	
	return 0; //successful exit
}
