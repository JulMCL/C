#include <stdio.h>

int main(void) {

    for (int i = 1; i < 11; i++) {
        for (int j = 1; j < 11; j++) {
            int num = i*j;
            printf("%d\t", num);
        }
        printf("\n");
    }
    
    return 0;
}
