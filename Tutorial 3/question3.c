#include <stdio.h>
#include <string.h>

#define PIN 7845

int main(void){
    int status = 5;
    int guess;

    while (status != 0) {
        printf("Enter the pincode!\n");
        scanf("%d", &guess);
        status--;
        
        if (guess == PIN) {
            printf("PIN is correct!\n");
            break;
        } else {
            getchar();
            printf("Try again, you have %d tries left\n", status);
        }
    }
    
    
    return 0;
}
