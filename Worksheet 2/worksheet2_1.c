#include <stdio.h>

int main(void) {
	
	int num1 = 0;
	int num2 = 0;	
	
	printf("Enter 2 numbers when asked to get the AVG, SUM and the total SUM of the inputted number when squared\n");

	printf("Enter number 1: ");
	scanf("%d", &num1);

	printf("\nEnter number 1: ");
	scanf("%d", &num2);

	printf("\nSum: %d", num1 + num2);
	printf("\nAVG: %d", (num1 + num2)/2);
	printf("\nAVG: %d", (num1 * num1) + (num2 * num2));
	
	return 0;
}