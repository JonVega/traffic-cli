#include "traffic.h"

int createBoard(unsigned char *gameBoard, unsigned int currentStage) {
	
	if(currentStage == 1) {
	
		//Line 1
		gameBoard[0] = 'G'; gameBoard[1] = 'G'; gameBoard[2] = '.';
		gameBoard[3] = '.'; gameBoard[4] = '.'; gameBoard[5] = 'Y';
		
		//Line 2
		gameBoard[6] = 'P'; gameBoard[7] = '.'; gameBoard[8] = '.';
		gameBoard[9] = 'B'; gameBoard[10] = '.'; gameBoard[11] = 'Y';
		
		//Line 3
		gameBoard[12] = 'P'; gameBoard[13] = 'R'; gameBoard[14] = 'R';
		gameBoard[15] = 'B'; gameBoard[16] = '.'; gameBoard[17] = 'Y';
		
		//Line 4
		gameBoard[18] = 'P'; gameBoard[19] = '.'; gameBoard[20] = '.';
		gameBoard[21] = 'B'; gameBoard[22] = '.'; gameBoard[23] = '.';
		
		//Line 5
		gameBoard[24] = 'O'; gameBoard[25] = '.'; gameBoard[26] = '.';
		gameBoard[27] = '.'; gameBoard[28] = 'T'; gameBoard[29] = 'T';
		
		//Line 6
		gameBoard[30] = 'O'; gameBoard[31] = '.'; gameBoard[32] = 'F';
		gameBoard[33] = 'F'; gameBoard[34] = 'F'; gameBoard[35] = '.';
	}
	
	else if(currentStage == 2) {
		
		//Line 1
		gameBoard[0] = 'Y'; gameBoard[1] = 'Y'; gameBoard[2] = 'Y';
		gameBoard[3] = 'L'; gameBoard[4] = '.'; gameBoard[5] = 'O';
		
		//Line 2
		gameBoard[6] = '.'; gameBoard[7] = '.'; gameBoard[8] = 'P';
		gameBoard[9] = 'L'; gameBoard[10] = '.'; gameBoard[11] = 'O';
		
		//Line 3
		gameBoard[12] = 'R'; gameBoard[13] = 'R'; gameBoard[14] = 'P';
		gameBoard[15] = '.'; gameBoard[16] = '.'; gameBoard[17] = 'T';
		
		//Line 4
		gameBoard[18] = '.'; gameBoard[19] = '.'; gameBoard[20] = 'P';
		gameBoard[21] = 'N'; gameBoard[22] = 'N'; gameBoard[23] = 'T';
		
		//Line 5
		gameBoard[24] = 'B'; gameBoard[25] = 'B'; gameBoard[26] = 'B';
		gameBoard[27] = '.'; gameBoard[28] = 'U'; gameBoard[29] = '.';
		
		//Line 6
		gameBoard[30] = '.'; gameBoard[31] = 'E'; gameBoard[32] = 'E';
		gameBoard[33] = '.'; gameBoard[34] = 'U'; gameBoard[35] = '.';
	}
	
	else if(currentStage == 3) {
		
		//Line 1
		gameBoard[0] = 'R'; gameBoard[1] = 'R'; gameBoard[2] = 'O';
		gameBoard[3] = 'Y'; gameBoard[4] = '.'; gameBoard[5] = '.';
		
		//Line 2
		gameBoard[6] = 'P'; gameBoard[7] = '.'; gameBoard[8] = 'O';
		gameBoard[9] = 'Y'; gameBoard[10] = '.'; gameBoard[11] = '.';
		
		//Line 3
		gameBoard[12] = 'P'; gameBoard[13] = 'R'; gameBoard[14] = 'R';
		gameBoard[15] = 'Y'; gameBoard[16] = '.'; gameBoard[17] = '.';
		
		//Line 4
		gameBoard[18] = 'P'; gameBoard[19] = '.'; gameBoard[20] = '.';
		gameBoard[21] = 'B'; gameBoard[22] = 'B'; gameBoard[23] = 'B';
		
		//Line 5
		gameBoard[24] = 'G'; gameBoard[25] = 'G'; gameBoard[26] = 'G';
		gameBoard[27] = '.'; gameBoard[28] = 'T'; gameBoard[29] = 'K';
		
		//Line 6
		gameBoard[30] = 'U'; gameBoard[31] = 'U'; gameBoard[32] = '.';
		gameBoard[33] = '.'; gameBoard[34] = 'T'; gameBoard[35] = 'K';
	}
	
	else if(currentStage == 4) {
		
		//Line 1
		gameBoard[0] = 'G'; gameBoard[1] = 'O'; gameBoard[2] = 'T';
		gameBoard[3] = 'T'; gameBoard[4] = 'P'; gameBoard[5] = 'R';
		
		//Line 2
		gameBoard[6] = 'G'; gameBoard[7] = 'O'; gameBoard[8] = '.';
		gameBoard[9] = '.'; gameBoard[10] = 'P'; gameBoard[11] = 'G';
		
		//Line 3
		gameBoard[12] = 'Y'; gameBoard[13] = 'R'; gameBoard[14] = 'R';
		gameBoard[15] = 'E'; gameBoard[16] = '.'; gameBoard[17] = 'S';
		
		//Line 4
		gameBoard[18] = 'Y'; gameBoard[19] = 'W'; gameBoard[20] = 'W';
		gameBoard[21] = 'E'; gameBoard[22] = '.'; gameBoard[23] = 'S';
		
		//Line 5
		gameBoard[24] = 'Y'; gameBoard[25] = '.'; gameBoard[26] = 'L';
		gameBoard[27] = 'U'; gameBoard[28] = 'U'; gameBoard[29] = 'U';
		
		//Line 6
		gameBoard[30] = 'N'; gameBoard[31] = 'N'; gameBoard[32] = 'L';
		gameBoard[33] = 'B'; gameBoard[34] = 'B'; gameBoard[35] = 'B';
	}
	
	else {
		printf("\nFATAL ERROR - EXITING PROGRAM\n\n");
		return 1;
	}
	return 0;
}

//--------------------------------------------------------------------

void drawBoard(unsigned char *gameBoard) {
	
	printf("# - - - - - - ");
	
	for(int i = 0; i < 36; i++) {		
		
		if(i%6 == 0 && i == 0) {
			printf("# \n| ");
		}
		
		else if(i%6 == 0 && i != 0 && i != 18) {
			printf("| \n| ");
		}
		
		else if(i%6 == 0 && i == 18) {
			printf("  \n| ");
		}

		printf("%c ", gameBoard[i]);
	}
	
	printf("| \n# - - - - - - #\n\n");
}


