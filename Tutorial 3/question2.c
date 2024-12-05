#include <stdio.h>

int main(void){
    int num;

    printf("Enter a number:\n");
    scanf("%d", &num);

    for (int i = num-1; i > 0; i--) {
        num *= i;
    }

    printf("The factorial is %d\n", num);

    return 0;
}
