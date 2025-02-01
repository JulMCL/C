#include <stdio.h>
#include <stdlib.h>


//endptr will point to the null terminator if strtof successfully converts the string to a float or to the first invalid character if unsuccessful
int isFloat(const char *str) {

    char *endptr;
    strtof(str, &endptr);
    return (*endptr == '\0');

}


int main(int argc, char *argv[]) {

    if (argc != 3) {
    
        printf("Error, please enter two numerical values\n");
    
    }
    
    float num1 = atof(argv[1]);
    float num2 = atof(argv[2]);
    
    if (isFloat(argv[1]) != 1 || isFloat(argv[2]) != 1) {
    
        printf("\nError, please enter two numerical values\n");
    
    } else {
    
        float ans = num1 + num2;
        printf("\nAnswer: %f\n", ans);
    
    }
    
    
    return 0;

}
