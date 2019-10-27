#include <stdio.h>
//#include <stdlib.h>
#include<stdbool.h>
#include "lo1.h"


int countChars(char *arg) {

    int i = 0;
    while (arg[i] != '\0') {
        i++;
    }

    return i;
}

int countWords(char *arg) {

    int wordsCounter = 0;
    int chars = countChars(arg);

    if (chars > 0) {
        wordsCounter = 1;
    }

    for (int i = 0; i < chars; i++) {

        if (is_space(arg[i])) {
            wordsCounter++;
        }
    }

    return wordsCounter;
}

int main (int argc, char *argv[]) {

    //char *userIn = (char*)malloc(50 * sizeof(char));
    char userIn[50];

#ifdef NORMAL

    if (should_count_chars(argc, argv)) {

        printf("Enter text: ");
        scanf("%49[^\n]", userIn);
        printf("%d words (%d characters)", countWords(userIn), countChars(userIn));
    }

    else {
        printf("Enter text: ");
        scanf("%49[^\n]", userIn);
        printf("%d words", countWords(userIn));
    }

#else
    if (should_count_chars(argc, argv)) {

        while (1) {

            printf("Enter text: ");
            scanf("%49[^\n]", userIn);
            printf("%d words (%d characters)", countWords(userIn), countChars(userIn));
	
	    char c;
            while((c = getchar()) != '\n' && c != EOF) {}
        } 
        
    }

    else {
        while (1) {
            printf("Enter text: ");
            scanf("%49[^\n]", userIn);
            printf("%d words", countWords(userIn));
	    
	    char c;
            while((c = getchar()) != '\n' && c != EOF) {}
        }
    }
#endif
}