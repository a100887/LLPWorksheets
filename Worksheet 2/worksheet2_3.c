#include <stdio.h>

int main(void) {
	
	int numbers[10];
	int largest = 0;

	printf("Enter 10 numbers");

	for (int i = 0; i < 10; i++) {
		
		scanf("%d", &numbers[i]);
	}
	
	for (int i = 0; i < 10; i++) {
		
		if (numbers[i] > largest) {
			largest = numbers[i];
		}
	}

	printf("The largest number is %d", largest);	
}