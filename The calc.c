#include<stdio.h>

int main (void) {
    int number1 , number2 ;
    char op ;
    printf("Enter a value for number1: \n");
    if(scanf("%d", &number1) !=1) {
        printf("Error\n");
        return 1;
    }
    printf("Enter an operation: \n");
    if(scanf(" %c", &op) !=1) {
        printf("Error\n");
        return 1;
    }
    printf("Enter a value for number2: \n");
    if(scanf("%d", &number2) !=1) {
        printf("Error\n");
        return 1;
    }
    if (op == '+') {
        printf("%d + %d = %d \n", number1 , number2 , number1 + number2);
    }
    else if (op == '-') {
        printf("%d - %d = %d \n", number1 , number2 , number1 - number2);
    }
    else if (op == '*') {
        printf("%d * %d = %d \n", number1 , number2 , number1 * number2);
    }
    else if (op == '/') {
        if (number2 == 0) {
            printf("Error (division by 0)\n");
        }
        else {
            printf("%d / %d = %f \n", number1 , number2 , (double)number1 / number2);
        }
    }
    else if (op == '%') {
        if (number2 == 0) {
            printf("Error (division by 0) \n");
        }
        else {
            printf("%d %% %d = %d \n", number1 , number2 , number1 % number2);
        }
    }
    else {
        printf("Error \n");
    }
    return 0;
}