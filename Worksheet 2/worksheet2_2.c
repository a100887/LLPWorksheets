#include <stdio.h>

typedef struct person{
	int id;
	char name[50];
	char surname[50];
	short age;
} personRec;

int main(void) {
	
	personRec personList[1];	
	
	printf("Enter your ID: ");
	scanf("%d", &personList[0].id);	

	printf("\nEnter your name: ");
	scanf("%s", &personList[0].name);

	printf("\nEnter your surname: ");
	scanf("%s", &personList[0].surname);

	printf("\nEnter your age: ");
	scanf("%hd", &personList[0].age);

	printf("\nYour ID is %d", personList[0].id);
	printf("\nYour name is %s", personList[0].name);
	printf("\nYour surname is %s", personList[0].surname);
	printf("\nYour age is %hd", personList[0].age);
	return 0;
}