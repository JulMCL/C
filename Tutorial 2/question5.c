#include <stdio.h>

int main(void){
    int inputdays;
    
    for(int i = 0; i < 10; i++){
      printf("Enter amount of days:\n");
      scanf("%d", &inputdays);
      int weeks = inputdays/7;
      int days = inputdays % 7;
      printf("%d weeks and %d days\n", weeks, days);
    }
    
    return 0;
}
