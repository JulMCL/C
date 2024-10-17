#include <stdio.h>

int add(num1, num2){
    int addition = num1 + num2;
    printf("Addition: %d\n", addition);
}

int subtract(num1, num2){
    int subtraction = num1 - num2;
    printf("Subtraction: %d\n", subtraction);
}

int multiply(num1, num2){
    int multiply = num1 * num2;
    printf("Multiply: %d\n", multiply);
}

int main(void){
    int num1, num2;
    
    printf("Enter number 1: \n");
    scanf("%d", &num1);
    printf("Enter number 2: \n");
    scanf("%d", &num2);
    
    add(num1, num2);
    subtract(num1, num2);
    multiply(num1, num2);
    
    return 0;
}
