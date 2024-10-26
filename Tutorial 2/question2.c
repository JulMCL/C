#include <stdio.h>

//1) $4234725.00
//2) The result does not change
//3) $4234725.0000
//4) %f gives out $0.0000 as it expects a float value, so it produces a garbage output, while %d gives out the answer in integer value
//5) If this happens, this could result in the program printing no output, display anomalies or having logical issues
//6) Hex: $409de5, Octal: $20116745

int main(){
    float weight;
    int value;
    printf("Enter your weight in pounds:\n");
    scanf("%f", &weight);
    //Platinum is $1770 / pound
    //14.5 troy ounces in 1 pound
    value = 1770.0 * weight * 14.5;
    printf("Your weight in platinum costs $%x.\n", value);
    printf("Your weight in platinum costs $%o.\n", value);
}
