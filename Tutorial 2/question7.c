#include <stdio.h>
int main(void){
    long long int input, result = 1;
    printf("Enter a number of your choice:\n");
    scanf("%lld", &input);
    
    for(int i = 1; i <= input; i++){
      result *= i;
    }
    
    printf("The results is: %lld\n", result);
    
    return 0;
}
