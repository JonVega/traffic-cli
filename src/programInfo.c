#include "traffic.h"

void displayInstructions() {
	//FIXME:make each command on one line	
	printf("\n _____          __  __ _    \n");
	printf("|_   _| _ __ _ / _|/ _(_)__ \n");
	printf("  | || '_/ _` |  _|  _| / _|\n");
	printf("  |_||_| \\__,_|_| |_| |_\\__|\n\n\n");
	
	printf("Enter '-' to reset board, 'i' to display this instruction\n");
	printf("or 'x' to exit\n\n");
	printf("Move the vehicle so the red car can exit the board to the\n");
	printf("right. Each move should be of the form:  [ CDN ]\n\n");
	printf("C - is the vehicle to be moved\n");
	printf("D - is the direction (u = up, d = down, l = left, r = right\n");
	printf("N - is the number of sqaures to move the select vehicle\n\n");
	printf("For example: GR2\n");
	printf("Move the G (green) vehicle to the right 2 sqaures\n\n");
}
