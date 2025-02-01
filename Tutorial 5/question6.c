#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char* concat(char *c1, char *c2) {

    char *final = malloc(strlen(c1) + strlen(c2) + 1);
    strcpy(final, c1);
    strcat(final, c2);
    
    printf("%s", final);
    
    return final;

}



int main(void) {
    
    char input1[100];
    
    printf("Enter a sentence: \n");
    fgets(input1, sizeof(input1), stdin);
    input1[strcspn(input1, "\n")] = '\0';
    
    char input2[15];
    
    printf("\nEnter a suffix: \n");
    fgets(input2, sizeof(input2), stdin);
    
    concat(input1, input2);

    return 0;

}
