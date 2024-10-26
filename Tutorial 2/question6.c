#include <stdio.h>

int main(void){
    float amount;

    for(int i = 0; i < 10; i++){
      printf("Enter an amount in dollars:\n");
      scanf("%f", &amount);
      float conversion = amount * 0.93;
      printf("The amount in euros is: %.2f\n", conversion);
    }

    return 0;
}
