#include "traffic.h"

void moveOneSquare(char userVehicle, char userDirection, char *n1, char *n2, char *n3, char *n4, char *n5, char *n6) {
	
	//LEFT
	if(userDirection == 'L') {
		//three pieces
		if(*n4 == userVehicle && *n5 == userVehicle && *n6 == userVehicle) {
			if(*n3 == '.') {
				*n3 = userVehicle;
				*n6 = '.';
			}
			else {
				printf("\n BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
			}
		}
		
		else if(*n3 == userVehicle && *n4 == userVehicle && *n5 == userVehicle) {
			if(*n2 == '.') {
				*n2 = userVehicle;
				*n5 = '.';
			}
			else {
				printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
			}
		}
		
		else if(*n2 == userVehicle && *n3 == userVehicle && *n4 == userVehicle) {
			if(*n1 == '.') {
				*n1 = userVehicle;
				*n4 = '.';
			}
			else {
				printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
			}
		}
		
		else if(*n1 == userVehicle && *n2 == userVehicle && *n3 == userVehicle) {
			printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
		}
		
		//two pieces
		else if(*n5 == userVehicle && *n6 == userVehicle) {
			if(*n4 == '.') {
				*n4 = userVehicle;
				*n6 = '.';
			}
			else {
				printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
			}
		}
		
		else if(*n4 == userVehicle && *n5 == userVehicle) {
			if(*n3 == '.') {
				*n3 = userVehicle;
				*n5 = '.';
			}
			else {
				printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
			}
		}
		
		else if(*n3 == userVehicle && *n4 == userVehicle) {
			if(*n2 == '.') {
				*n2 = userVehicle;
				*n4 = '.';
			}
			else {
				printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
			}
		}
		
		else if(*n2 == userVehicle && *n3 == userVehicle) {
			if(*n1 == '.') {
				*n1 = userVehicle;
				*n3 = '.';
			}
			else {
				printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
			}
		}
		
		else if(*n1 == userVehicle && *n2 == userVehicle) {
			printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
		}
	}
	
	//RIGHT
	else if(userDirection == 'R') {
		//three pieces
		if(*n1 == userVehicle && *n2 == userVehicle && *n3 == userVehicle) {
            if (*n4 == '.') {
            	*n4 = userVehicle;
            	*n1 = '.';
            }
            else {
            	printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
            }
        }
		
		else if(*n2 == userVehicle && *n3 == userVehicle && *n4 == userVehicle) {
            if (*n5 == '.') {
            	*n5 = userVehicle;
            	*n2 = '.';
            }
            else {
            	printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
            }
        }
		
		else if(*n3 == userVehicle && *n4 == userVehicle && *n5 == userVehicle) {
            if (*n6 == '.') {
            	*n6 = userVehicle;
            	*n3 = '.';
            }
            else {
            	printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
            }
        }
		
		else if(*n4 == userVehicle && *n5 == userVehicle && *n6 == userVehicle) {
			printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
        }
		
		//two pieces
        else if (*n1 == userVehicle && *n2 == userVehicle) {
            if (*n3 == '.') {
            	*n3 = userVehicle;
            	*n1 = '.';
            }
            else {
            	printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
            }
		}
		
        else if (*n2 == userVehicle && *n3 == userVehicle) {
            if (*n4 == '.') {
            	*n4 = userVehicle;
            	*n2 = '.';
            }
            else {
            	printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
            }
		}
		
        else if (*n3 == userVehicle && *n4 == userVehicle) {
            if (*n5 == '.') {
            	*n5 = userVehicle;
            	*n3 = '.';
            }
            else {
            	printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
            }
		}
		
        else if (*n4 == userVehicle && *n5 == userVehicle) {
            if (*n6 == '.') {
            	*n6 = userVehicle;
            	*n4 = '.';
            }
            else {
            	printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
            }
		}
		
        else if (*n5 == userVehicle && *n6 == userVehicle) {
			printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
		}
	}
	
	//UP
	else if(userDirection == 'U') {
		//three pieces
		if(*n6 == userVehicle && *n5 == userVehicle && *n4 == userVehicle) {
			if(*n3 == '.') {
				*n3 = userVehicle;
				*n6 = '.';
			}
			else {
				printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
			}
		}
		else if(*n5 == userVehicle && *n4 == userVehicle && *n3 == userVehicle) {
			if(*n2 == '.') {
				*n2 = userVehicle;
				*n5 = '.';
			}
			else {
				printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
			}
		}
		else if(*n4 == userVehicle && *n3 == userVehicle && *n2 == userVehicle) {
			if(*n1 == '.') {
				*n1 = userVehicle;
				*n4 = '.';
			}
			else {
				printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
			}
		}
		else if(*n3 == userVehicle && *n2 == userVehicle && *n1 == userVehicle) {
			printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
		}
		
		//two pieces
		else if(*n6 == userVehicle && *n5 == userVehicle) {
			if(*n4 == '.') {
				*n4 = userVehicle;
				*n6 = '.';
			}
			else {
				printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
			}
		}
		else if(*n5 == userVehicle && *n4 == userVehicle) {
			if(*n3 == '.') {
				*n3 = userVehicle;
				*n5 = '.';
			}
			else {
				printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
			}
		}
		else if(*n4 == userVehicle && *n3 == userVehicle) {
			if(*n2 == '.') {
				*n2 = userVehicle;
				*n4 = '.';
			}
			else {
				printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
			}
		}
		else if(*n3 == userVehicle && *n2 == userVehicle) {
			if(*n1 == '.') {
				*n1 = userVehicle;
				*n3 = '.';
			}
			else {
				printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
			}
		}
		else if(*n2 == userVehicle && *n1 == userVehicle) {
			printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
		}
	}
	
	//DOWN
	else if(userDirection == 'D') {
		//three pieces
		if(*n6 == userVehicle && *n5 == userVehicle && *n4 == userVehicle) {
			printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
		}
		else if(*n5 == userVehicle && *n4 == userVehicle && *n3 == userVehicle) {
			if(*n6 == '.') {
				*n6 = userVehicle;
				*n3 = '.';
			}
			else {
				printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
			}
		}
		else if(*n4 == userVehicle && *n3 == userVehicle && *n2 == userVehicle) {
			if(*n5 == '.') {
				*n5 = userVehicle;
				*n2 = '.';
			}
			else {
				printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
			}
		}
		else if(*n3 == userVehicle && *n2 == userVehicle && *n1 == userVehicle) {
			if(*n4 == '.') {
				*n4 = userVehicle;
				*n1 = '.';
			}
			else {
				printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
			}
		}
		
		//two pieces
		else if(*n6 == userVehicle && *n5 == userVehicle) {
			printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
		}
		else if(*n5 == userVehicle && *n4 == userVehicle) {
			if(*n6 == '.') {
				*n6 = userVehicle;
				*n4 = '.';
			}
			else {
				printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
			}
		}
		else if(*n4 == userVehicle && *n3 == userVehicle) {
			if(*n5 == '.') {
				*n5 = userVehicle;
				*n3 = '.';
			}
			else {
				printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
			}
		}
		else if(*n3 == userVehicle && *n2 == userVehicle) {
			if(*n4 == '.') {
				*n4 = userVehicle;
				*n2 = '.';
			}
			else {
				printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
			}
		}
		else if(*n2 == userVehicle && *n1 == userVehicle) {
			if(*n3 == '.') {
				*n3 = userVehicle;
				*n1 = '.';
			}
			else {
				printf("\n\a BOOP!   *** Move was attempted, but couldn't be completed. ***\n\n");
			}
		}
	}
}

//--------------------------------------------------------------------

void handlePieces(char userVehicle, char userDirection, int userDistance, char *n1, char *n2, char *n3, char *n4, char *n5, char *n6) {
	for(int i = 0; i < userDistance; i++) {
		moveOneSquare(userVehicle, userDirection, n1, n2, n3, n4, n5, n6);
	}
}

//--------------------------------------------------------------------

void makeMove(char userVehicle, char userDirection, int userDistance, int currentStage, char *gameBoard) {
	if( (userDirection == 'R') || (userDirection == 'L') ) {
		//row 1
		if(userVehicle == gameBoard[0] || userVehicle == gameBoard[1] || userVehicle == gameBoard[2] || userVehicle == gameBoard[3] || userVehicle == gameBoard[4] || userVehicle == gameBoard[5]) {
			handlePieces(userVehicle, userDirection, userDistance, &gameBoard[0], &gameBoard[1], &gameBoard[2], &gameBoard[3], &gameBoard[4], &gameBoard[5]);
		}
		//row 2
		else if(userVehicle == gameBoard[6] || userVehicle == gameBoard[7] || userVehicle == gameBoard[8] || userVehicle == gameBoard[9] || userVehicle == gameBoard[10] || userVehicle == gameBoard[11]) {
			handlePieces(userVehicle, userDirection, userDistance, &gameBoard[6], &gameBoard[7], &gameBoard[8], &gameBoard[9], &gameBoard[10], &gameBoard[11]);
		}
		//row 3
		else if(userVehicle == gameBoard[12] || userVehicle == gameBoard[13] || userVehicle == gameBoard[14] || userVehicle == gameBoard[15] || userVehicle == gameBoard[16] || userVehicle == gameBoard[17]) {
			handlePieces(userVehicle, userDirection, userDistance, &gameBoard[12], &gameBoard[13], &gameBoard[14], &gameBoard[15], &gameBoard[16], &gameBoard[17]);
		}
		//row 4
		else if(userVehicle == gameBoard[18] || userVehicle == gameBoard[19] || userVehicle == gameBoard[20] || userVehicle == gameBoard[21] || userVehicle == gameBoard[22] || userVehicle == gameBoard[23]) {
			handlePieces(userVehicle, userDirection, userDistance, &gameBoard[18], &gameBoard[19], &gameBoard[20], &gameBoard[21], &gameBoard[22], &gameBoard[23]);
		}
		//row 5
		else if(userVehicle == gameBoard[24] || userVehicle == gameBoard[25] || userVehicle == gameBoard[26] || userVehicle == gameBoard[27] || userVehicle == gameBoard[28] || userVehicle == gameBoard[29]) {
			handlePieces(userVehicle, userDirection, userDistance, &gameBoard[24], &gameBoard[25], &gameBoard[26], &gameBoard[27], &gameBoard[28], &gameBoard[29]);
		}
		//row 6
		else if(userVehicle == gameBoard[30] || userVehicle == gameBoard[31] || userVehicle == gameBoard[32] || userVehicle == gameBoard[33] || userVehicle == gameBoard[34] || userVehicle == gameBoard[35]) {
			handlePieces(userVehicle, userDirection, userDistance, &gameBoard[30], &gameBoard[31], &gameBoard[32], &gameBoard[33], &gameBoard[34], &gameBoard[35]);
		}
	}
		
	else if(userDirection == 'U' || userDirection == 'D') {
			//column 1
			if(userVehicle == gameBoard[0] || userVehicle == gameBoard[6] || userVehicle == gameBoard[12] || userVehicle == gameBoard[18] || userVehicle == gameBoard[24] || userVehicle == gameBoard[30]) {
				handlePieces(userVehicle, userDirection, userDistance, &gameBoard[0], &gameBoard[6], &gameBoard[12], &gameBoard[18], &gameBoard[24], &gameBoard[30]);
			}
			//column 2
			else if(userVehicle == gameBoard[1] || userVehicle == gameBoard[7] || userVehicle == gameBoard[13] || userVehicle == gameBoard[19] || userVehicle == gameBoard[25] || userVehicle == gameBoard[31]) {
				handlePieces(userVehicle, userDirection, userDistance, &gameBoard[1], &gameBoard[7], &gameBoard[13], &gameBoard[19], &gameBoard[25], &gameBoard[31]);
			}
			//column 3
			else if(userVehicle == gameBoard[2] || userVehicle == gameBoard[8] || userVehicle == gameBoard[14] || userVehicle == gameBoard[20] || userVehicle == gameBoard[26] || userVehicle == gameBoard[32]) {
				handlePieces(userVehicle, userDirection, userDistance, &gameBoard[2], &gameBoard[8], &gameBoard[14], &gameBoard[20], &gameBoard[26], &gameBoard[32]);
			}
			//column 4
			else if(userVehicle == gameBoard[3] || userVehicle == gameBoard[9] || userVehicle == gameBoard[15] || userVehicle == gameBoard[21] || userVehicle == gameBoard[27] || userVehicle == gameBoard[33]) {
				handlePieces(userVehicle, userDirection, userDistance, &gameBoard[3], &gameBoard[9], &gameBoard[15], &gameBoard[21], &gameBoard[27], &gameBoard[33]);
			}
			//column 5
			else if(userVehicle == gameBoard[4] || userVehicle == gameBoard[10] || userVehicle == gameBoard[16] || userVehicle == gameBoard[22] || userVehicle == gameBoard[28] || userVehicle == gameBoard[34]) {
				handlePieces(userVehicle, userDirection, userDistance, &gameBoard[4], &gameBoard[10], &gameBoard[16], &gameBoard[22], &gameBoard[28], &gameBoard[34]);
			}
			//column 6
			else if(userVehicle == gameBoard[5] || userVehicle == gameBoard[11] || userVehicle == gameBoard[17] || userVehicle == gameBoard[23] || userVehicle == gameBoard[29] || userVehicle == gameBoard[35]) {
				handlePieces(userVehicle, userDirection, userDistance, &gameBoard[5], &gameBoard[11], &gameBoard[17], &gameBoard[23], &gameBoard[29], &gameBoard[35]);
			}
		}
}
