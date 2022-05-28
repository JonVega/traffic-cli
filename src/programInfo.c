#include "traffic.h"

void displayLogo() {
	printf("\n _____          __  __ _    \n");
	printf("|_   _| _ __ _ / _|/ _(_)__ \n");
	printf("  | || '_/ _` |  _|  _| / _|\n");
	printf("  |_||_| \\__,_|_| |_| |_\\__|\n\n");
	printf("'?' for instructions\n\n");
}

void displayInstructions() {
	
	printf("\n\n---------------------------\n");
	printf("'-' to reset board\n'?' to display the instructions\n'@' to display program information\n'+' to create your own stage\n'x' or 'q' to exit\n\n");
	printf("Move the vehicle so the red car can exit the board to the\n");
	printf("right. Each move should be of the form:  [ CDN ]\n\n");
	printf("C - is the vehicle to be moved\n");
	printf("D - is the direction (u = up, d = down, l = left, r = right\n");
	printf("N - is the number of sqaures to move the select vehicle\n\n");
	printf("For example: GR2\n");
	printf("Move the G (green) vehicle to the right 2 sqaures\n");
	printf("---------------------------\n\n");
}

void displayProgramInfo() {
	printf("\n\n---------------------------\n");
	printf("This game was originally a school assignment during my\n");
	printf("first year in college in 2017. I wanted to add more content\n");
	printf("beyond what was required for a grade, so I continued working\n");
	printf("on it during my spare time. I hope you like it!\n");
	printf("\n- Jonathan Vega (jon.e.vega@icloud.com)\n");
	printf("\nversion - 1.00");
	
	printf("\n\n---------------------------\n");
}

void displayLicense() {
	printf("\n\n---------------------------\n");
	printf("\nMIT License\n\n");
	printf("Copyright (c) 2022 Jonathan Vega\n\n");
	printf("Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the \"Software\"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:\n\n");
	printf("The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.\n\n");
	printf("THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.");
}