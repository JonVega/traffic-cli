#include "traffic.h"

//the number comment below show the best amount of moves possible

int createBoard(char *gameBoard, unsigned int currentStage) {
	//1
	if(currentStage == 1) {strcpy(gameBoard, "............RR......................");}
	//2
	else if(currentStage == 2) {strcpy(gameBoard, "...........BRR...B..................");}
	else if(currentStage == 3) {strcpy(gameBoard, ".....B.....BRR...B..................");}
	//3
	else if(currentStage == 4) {strcpy(gameBoard, ".BB.....O...RRO.....T.....T.....T...");}
	else if(currentStage == 5) {strcpy(gameBoard, ".....O.....ORR...O.........BBB......");}
	else if(currentStage == 6) {strcpy(gameBoard, "BBB.....O...RRO.....T.....T.........");}
	//4
	else if(currentStage == 7) {strcpy(gameBoard, "..E.....EBBB..ERRF.....F.OOOTT......");}
	else if(currentStage == 8) {strcpy(gameBoard, "..EBBB..E..F..ERRF.OOOTT............");}
	else if(currentStage == 9) {strcpy(gameBoard, "..BBB...O.T.RRO.T...O.E.....E.....E.");}
	else if(currentStage == 10) {strcpy(gameBoard, "BBBOO...Y...RRY...FTTEEEF...........");}
	//5
	else if(currentStage == 11) {strcpy(gameBoard, "F.....FBBOOOFRR..H.Y...H.YTTEE.Y....");}
	else if(currentStage == 12) {strcpy(gameBoard, ".FBBOO.FY...RRY...E..H..ETTH........");}
	else if(currentStage == 13) {strcpy(gameBoard, "E..BBBE..Y.HRR.Y.H.FOO...F.....F..TT");}
	else if(currentStage == 14) {strcpy(gameBoard, "FBBB..F..H.xFRRH.I.YTT.I.Y........EE");}
	else if(currentStage == 15) {strcpy(gameBoard, ".YBBOO.YH...RRHI..FTTI..F.......EE..");}
	//6
	else if(currentStage == 16) {strcpy(gameBoard, "BBBOOKTTTJ.KRR.J..I..EEEI...FFYYHHH.");}
	else if(currentStage == 17) {strcpy(gameBoard, "BBOOI...TTI.RR.H..EEEH..Y.FFF.Y.....");}
	else if(currentStage == 18) {strcpy(gameBoard, "BBBOOI...YHIRR.YH.F.TTT.F.....EE....");}
	else if(currentStage == 19) {strcpy(gameBoard, ".BBOOH....YHRR..YH...TT...EEE.....FF");}
	else if(currentStage == 20) {strcpy(gameBoard, "T.BBB.T..FYHTRRFYH.E.OO..E..........");}
	else if(currentStage == 21) {strcpy(gameBoard, ".YBBOO.YH..JRRHI.JFTTI..F.......EE..");}
	//8
	else if(currentStage == 22) {strcpy(gameBoard, "GG...YP..B.YPRRB.YP..B..O...TTO.FFF.");}
	//15
	else if(currentStage == 23) {strcpy(gameBoard, "BBBH.J..GH.JRRG..K..GCCKDEE.I..FF.I.");}
	
	else {
		printf("\nMISSING STAGE - EXITING PROGRAM\n\n");
		return 1;
	}
	return 0;
}

//--------------------------------------------------------------------

void drawBoard(char *gameBoard) {
	
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


