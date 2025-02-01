#include <stdio.h>

int gcd(int x, int y) {

    if (y == 0) {
    
        return x;
    
    } else {
    
        return gcd(y, x%y);
    
    }

}



int main(void) {

    int x, y, temp;
    printf("Enter two numbers of your choice: \n");
    scanf("%d", &x);
    scanf("%d", &y);
    
    if (x > y) {
      
      
    } else if (x == y) {
    
        printf("Do not enter the same number twice\n");
    
    } else {
    
        temp = x;
        x = y;
        y = temp;
        
    }
    
    
    int result = gcd(x, y);
    printf("\n%d\n", result);
    
    
    return 0;

}
