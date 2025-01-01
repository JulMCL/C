#include <stdio.h>


int main(void){

    int ict, equipment;
    double amount = 0, tax = 0;

    printf("How much money are you making per year?\n");
    scanf("%lf", &amount);
    
    printf("Do you work in the ICT industry? (1 for yes, other for no)\n");
    scanf("%d", &ict);
    
    printf("Do you collect old electronic equipment? (1 for yes, other for no)\n");
    scanf("%d", &equipment);
    
    
    
    if (equipment != 1) {
    
        if (amount >= 0 && amount <= 10000) {
        
            tax = (18 * amount) / 100;
        
        } else if (amount > 10000 && amount <= 18000) {
        
            amount -= 10000;
            tax = 1800 + ((20 * amount) / 100);
        
        } else if (amount > 18000) {
        
            amount -= 18000;
            tax = 1800 + 1600 + ((25 * amount) / 100);
        
        }
    
    } else {
    
        if (amount >= 0 && amount <= 15000) {
          
              tax = (18 * amount) / 100;
          
          } else if (amount > 10000 && amount <= 18000) {
          
              amount -= 15000;
              tax = 2700 + ((20 * amount) / 100);
          
          } else if (amount > 23000) {
          
              amount -= 23000;
              tax = 2700 + 1600 + ((25 * amount) / 100);
          
          }
    
    }


    if (ict == 1) {
    
        tax -= (5 * tax) / 100;
    
    }


    printf("Your tax for a year is: %.2f\n", tax);

    return 0;
    
}
