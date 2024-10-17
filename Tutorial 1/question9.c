#include <stdio.h>
int main(void){
    int a3 = 1000, a4 = 1000, a5 = 1000;
    int orderA3, orderA4, orderA5;
    
    printf("Orders can only be of maximum 1000 packs per paper size\n");
    printf("Orders can only be made by packs, and not by a specific amount of sheets.\n");
    
    printf("How many A3 packs would you like?\n");
    scanf("%d", &orderA3);
    
    printf("How many A4 packs would you like?\n");
    scanf("%d", &orderA4);
    
    printf("How many A5 packs would you like?\n");
    scanf("%d", &orderA5);
    
    printf("Your order: %d A3 packs, %d A4 packs, %d A5 packs\n", orderA3, orderA4, orderA5);
    
    a3 = a3 - orderA3;
    a4 = a4 - orderA4;
    a5 = a5 - orderA5;
    
    printf("Updated stock: %d A3 packs, %d A4 packs, %d A5 packs\n", a3, a4, a5);
    
    return 0;
}
