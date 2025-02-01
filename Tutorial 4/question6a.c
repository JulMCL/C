#include <stdio.h>
#include <math.h>


void toCeil(float *x) {

    *x = ceil(*x);

}


void toFloor(float *x) {

    *x = floor(*x);

}



int main(void) {

    float input1;
    float input2;
    
    printf("Enter a decimal number: \n");
    scanf("%f", &input1);
    input2 = input1;
    
    printf("\n");
    
    toCeil(&input1);
    printf("\nCeiling: ");
    printf("%.2f\n", input1);
    
    toFloor(&input2);
    printf("\nFloor: ");
    printf("%.2f\n", input2);


    return 0;
    
}
