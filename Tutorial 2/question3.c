#include <stdio.h>
#include <string.h>

int main(void){
    char str1[21];
    char str2[21];
    char str3[21];
    
    printf("Enter your first word:\n");
    scanf("%20s", str1);           //introducing a limit of 20 characters

    int size1 = strlen(str1);

    for(int i = size1 - 1; i >= 0; i--){
      printf("%c", str1[i]);
    }

    printf("\n");


    printf("Enter your seconds word:\n");
    scanf("%20s", str2);

    int size2 = strlen(str2);

    for(int i = size2 - 1; i >= 0; i--){
      printf("%c", str2[i]);
    }

    printf("\n");

    printf("Enter your thrid word:\n");
    scanf("%20s", str3);

    int size3 = strlen(str3);

    for(int i = size3 - 1; i >= 0; i--){
      printf("%c", str3[i]);
    }
    
    return 0;
}
