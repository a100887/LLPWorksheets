#include <stdio.h>

int main(void){

	int userIn;
	int check;	
	
	printf("Enter a number between 1 and 100: ");
	check = scanf("%d", &userIn);

	if (check <= 0) {
		printf("Do not use strings! Please enter a number between 1 and 100.");
	}

	else {
		if (userIn >= 1 && userIn <= 100) {
			printf("Valid input");
		}

		else {
			printf("The inputted number is out of range!");
		}
	}
	
	return 0;
}