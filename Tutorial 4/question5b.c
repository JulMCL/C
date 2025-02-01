#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {

    int count = 0;
    char str[100];
    printf("Enter a sentence, but do not include numeric characters:\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    
    
    for (int i = 0; i < strlen(str) - 1; i++) {
    
        if(isdigit(str[i])) { 
        
            count++;
        
        }
    
    }

    
    if (count > 0) {
    
        printf("\nThe input is not valid, there are numeric values\n\n");
    
    } else {
    
        printf("\nValid input\n\n");
    
    }
    
    
    printf("\nThe size of the input string is: %ld\n\n", strlen(str));
    
    
    printf("\nThe first character of the string is: %c\n\n", str[0]);
    
    
    int frequency = 0;
    char ans = '\0';
    
    for (int i = 0; i < strlen(str); i++) { 
    
        char element = str[i];
        int count2 = 0;
        
        if (element == ' ') {
        
            continue;
        
        }
        
        for (int j = 0; j < strlen(str); j++) {
        
            if (str[j] == element) {
            
                count2++;
            
            }
        
        }
        
        if (count2 > frequency) {
            
            frequency = count2;
            ans = element;
        
        }
    
    }
    
    printf("\nThe most frequent character is %c\n", ans);


    return 0;

}
