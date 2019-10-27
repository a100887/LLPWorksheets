#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	int a = 0;
	int b = 0;

	while (argc > 3 || argc < 3) {
		
		printf("Only 2 arguments are accepted!");
		exit(0);
	}
	
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	
	printf("The largest number is %d", (a > b) * a + (b > a) * b);
	
	return 0;
}