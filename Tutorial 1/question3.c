#include <stdio.h>
int main(void){
    int dogs, cats, total;
    
    printf("How  many dogs do you have?\n");
    scanf("%d", &dogs);
    printf("So you have %d dog(s)!\n", dogs);
    printf("How many cats do you have?\n");
    scanf("%d", &cats);

    total = dogs + cats;
    printf("So you have %d dog(s) and %d total pets!\n", dogs, total);
    
    return 0;
}