#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	
	int rndNum;
	int max = 100;
	int min = 1;
	
	srand(time(NULL));

	for (int i = 0; i < 5; i++) {
		rndNum = (rand() % (max - min + 1)) + min;
		printf("%d ", rndNum);										
								
	}
	
	
	return 0;
	
}