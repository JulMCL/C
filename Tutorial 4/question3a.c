#include <stdio.h>

int main(void) {
    
    int x, y, temp, rem;
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
    
    
    for (int i = 0; y != 0; i++) {
    
        rem = x % y;
        x = y;
        y = rem;
    
    }
    
    printf("%d\n", x);
    

    return 0;

}
