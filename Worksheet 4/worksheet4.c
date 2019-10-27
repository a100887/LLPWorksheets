#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int add(int num1, int num2) {
    return num1 + num2;
}

int subtract (int num1, int num2) {
    return num1 - num2;
}

int multiply(int num1, int num2) {
    return num1 * num2;
}

int divide (int num1, int num2) {
    return num1/num2;
}

int isNumeric(char arr[]) {

    for(int i = 0; i < strlen(arr); i++) {

        if (!isdigit(arr[i])) {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char *argv[]) {

    //char operator = argv[2];
    int operatorCounter = 0;
    int errors = 0;
    int invNum = 0;
    int missNum = 0;
    printf("Calculator: \n");

    if (argc > 1) {

        for (int i = 1; i <= argc -1 ; i++) {

            if (*argv[i] == '+' || *argv[i] == '-' || *argv[i] == '/' || *argv[i] == '*') {
                operatorCounter = i;
                break;
            }
        }

        if (argc >= 2) {
            if ((!isNumeric(argv[1])) && (*argv[1] != '+' && *argv[1] != '-' && *argv[1] != '/' && *argv[1] != '*')) {
                errors = 1;
                invNum = 1;
            }
        }

        else {
            missNum = 1;
        }

        if (argc >= 4) {

            if ((!isNumeric(argv[3])) && (*argv[3] != '+' && *argv[3] != '-' && *argv[3] != '/' && *argv[3] != '*')) {
                errors = 1;
                invNum = 1;
            }
        }

        else if (operatorCounter && argc == 3) {
            errors = 1;
            missNum = 1;
        }

        if (argc < 3 ) {
            missNum = 1;
            errors = 1;
        }
        if ((operatorCounter) || argc == 4) {
            
            if ((*argv[operatorCounter] != '+' && *argv[operatorCounter] != '-' && *argv[operatorCounter] != '/' && *argv[2] != '*') || (strlen(argv[operatorCounter]) > 1)) {
                printf("Error: invalid operator \n");
                errors = 1;
            }
        }

        else {
            printf("Error: missing operator\n");
            errors = 1;
        }

        if (invNum) {
            printf("Error: invalid number\n");
        }

        if (missNum) {
            printf("Error: missing number\n");
        }

        if (!errors) {

            int num1 = atoi(argv[1]);
            int num2 = atoi(argv[3]);

            #ifdef FULL
                switch(*argv[2]) {
                    case '+':
                        printf("%d + %d = %d\n", num1, num2, add(num1, num2));
                        break;
                    case '-':
                        printf("%d - %d = %d\n", num1, num2, subtract(num1, num2));
                        break;
                    case '/':
                        printf("%d / %d = %d\n", num1, num2, divide(num1, num2));
                        break;
                    case '*':
                       printf("%d * %d = %d\n", num1, num2, multiply(num1, num2));
                        break;
                }
            #endif

            #ifdef DEMO
                switch(*argv[2]) {
                    case '+':
                        printf("%d + %d = %d\n", num1, num2, add(num1, num2));
                        break;
                    default:
                        printf("Demo only supports additions");
                }
            #endif

        }
    }

    else {
        printf("Error: no inputs\n");
    }
    
    return 0;
}