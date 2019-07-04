#include "traffic.h"

int main(int argc, char **argv) {
	
	//TODO:add high score (runtime only - show on program exit?)
	//TODO:add easy level editor 
	//TODO:random stage selection
	
	if(argc >= 3) {
		printf("Error: -v (version) or -c (changelog)\n");
		return 1;
	}
	
	if(argc == 2) {
		if (!strcmp(argv[1], "-d")) { //TODO:complete debug mode (flags?)
			printf("\ndebug mode goes here\n");
		}
	
		else if ( (!strcmp(argv[1], "-v")) || (!strcmp(argv[1], "--version")) ) {
			printf("version 0.9799-5\n");
			return 0;
		}
	
		else if ( (!strcmp(argv[1], "-c")) || (!strcmp(argv[1], "--changelog")) ) {
			printf("\nChange Log\n\n");
			printf("0.9799-5  |  June 10, 2019\n\n");
			printf("Missing Debug Mode\n");
			printf("Lots of TODO in code (high score?, stage selector, etc)\n");
			printf("All code is in one file (bad design)\n");
		
			printf("\n");
			return 0;
		}
	}

	
	unsigned char gameBoard[36] = "";
	unsigned int currentStage = 1;
	
	unsigned int numberMovesAttempted = 0;
	unsigned int totalAttempts = 0;
	
	unsigned char userVehicle = '\0'; 	//[C]
	unsigned char userDirection = '\0'; //[D]
	unsigned int userDistance = 0; 		//[N]
	
	if(createBoard(gameBoard, currentStage) != 0) {
		return 1;
	}
	
	displayInstructions();
	
	while(userVehicle != 'x' && userVehicle != 'X') { //exits loop & terminates
		
		drawBoard(gameBoard);
		
		printf("Attempts: %d | >> ", numberMovesAttempted);
		scanf(" %c", &userVehicle);
		
		if(userVehicle == 'x' || userVehicle == 'X') {
			break;
		}
		
		else if(userVehicle == 'q' || userVehicle == 'Q') {
			break;
		}
		
		else if(userVehicle == 'i' || userVehicle == 'I') { //show instructions
			displayInstructions();
			drawBoard(gameBoard);
		}
		
		else if(userVehicle == '-') {
			if(createBoard(gameBoard, currentStage) != 0) {
				return 1;
			}
			continue;
		}
		
		//TODO:convert lower-case to upper automatically
		scanf(" %c", &userDirection);
		
		scanf(" %d", &userDistance);
		
		makeMove(userVehicle, userDirection, userDistance, currentStage, gameBoard);
		
		numberMovesAttempted++;
		
		if(gameBoard[17] == 'R') {
			currentStage++;
			printf("\nStage %d Complete  -  # of Attempts: %d\n",currentStage-1, numberMovesAttempted);
			totalAttempts = totalAttempts + numberMovesAttempted;
			numberMovesAttempted = 0;

			/* Was going to use this when the user completes 5 stages.
			   Since many levels can be added (infinite), I may use it for runtime statistics
			   
			if(currentStage == 5) {
				printf("\n\nA WINNER IS YOU!\n\nTotal Attempts: %d\n\n", totalAttempts);
				return 0;
			}
			*/
			
			if(createBoard(gameBoard, currentStage) != 0) {
				return 1;
			}
		}
		
	}
	printf("\nbye-bye!\n\n");
	
	return 0; //successful exit
}
