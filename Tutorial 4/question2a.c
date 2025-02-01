#include <stdio.h>


void fib(int n);


int main(void) {

    int last = 0;
    printf("Enter the number of the last element of your Fibonacci sequence: \n");
    scanf("%d", &last);
    printf("\n");
    
    if (last <= 0) {
    
        printf("Please enter a positive integer.\n");
        
    } else {
    
        fib(last);
        
    }


    return 0;
    
}


void fib(int last) {
    
    int first = 0;
    int second = 1;
    int temp = 0;
    
    
    if (last == 1) {
    
        printf("%d\n", first);
    
    } else {
    
        printf("%d %d", first, second);

        for (int i = 2; i < last; i++) { 
            temp = first + second;
            first = second;
            second = temp;
            
            printf(" %d", temp);
            
        }
    
    }
    
    printf("\n");

}
