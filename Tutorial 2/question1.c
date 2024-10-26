#include <stdio.h>

int main(void){

    int userinput;
    printf("Enter an integer:\n");
    scanf("%d", &userinput);
    printf("The number %d corresponds to %c\n", userinput, userinput);
    
    return 0;
}
