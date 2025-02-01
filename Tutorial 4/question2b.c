#include <stdio.h>


int fib(int n) {

    if (n == 0) {
    
        return 0;
    
    } else if (n == 1) {
    
        return 1;
    
    } else {
    
        return fib(n-1) + fib(n-2);
    
    }
    

}


int main(void) { 
    
    int last;
    printf("Enter the number of the last element in your Fibonacci sequence: \n");
    scanf("%d", &last);
    
    
    if (last < 1) {
    
        printf("Enter a valid number\n");
    
    } else {
        
        for (int i = 0; i < last; i++) {
        
            printf("%d ", fib(i));
        
        }
        
        printf("\n");
    
    }
    

    return 0;    
    
}
