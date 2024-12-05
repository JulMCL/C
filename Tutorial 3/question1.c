#include <stdio.h>

int main(void) {
    long num;
    long sum = 0L; /* initialize sum to zero */
    int status;
    
    do {
        printf("Please enter an integer to be summed (q to quit): ");
        status = scanf("%ld", &num);
        
        if (status == 1) {
            sum += num;
        }
    
    } while (status == 1);
    
    printf("Those integers sum to %ld.\n", sum);

    return 0;
}

