#include <stdio.h>

int main(void) {
	
	int seconds;
	int time;
	int minutes;
	int hours;
	
	printf("Enter number of seconds: ");
	scanf("%d", &time);

	seconds = time % 60;
	time = (time - seconds) / 60;
	minutes = time % 60;
	hours = (time - minutes) / 60;

	printf("\n%2d:%2d:%2d", hours, minutes, seconds);

	return 0;
}