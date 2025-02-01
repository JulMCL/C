#include <stdio.h>

void dectohex(int num) {

    if (num == 0) {
    
        return;
    
    }
    
    
    dectohex(num/16);
    
    int rem = num % 16;
    
    if (rem < 10) {
    
        printf("%d", rem);
    
    } else {
    
        printf("%c", rem - 10 + 'A');
    
    }

}



void reverse(char input[], int start, int end) {

    if (start >= end) {
    
        return;
    
    }
    
    char temp = input[start];
    input[start] = input[end];
    input[end] = temp;
    
    reverse(input, start + 1, end - 1);
    
}



int main(void){

    //part a    
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    
    if (num == 0) {
    
        printf("0");
    
    } else {
    
        dectohex(num);
    
    }
    
    printf("\n");
    
    
    //part b
    char input[100];
    printf("Enter a string of your choice: \n");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';
    
    reverse(input, 0, strlen(input) - 1);
    
    printf("%s\n", input);
    

    return 0;

}
