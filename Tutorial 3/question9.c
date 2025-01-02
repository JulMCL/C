#include <stdio.h>

int main(void) {

    
    double num;
    char input[100];
    double output[100];
    
    FILE *file = fopen("output.txt", "w");
    
    printf("Enter numbers separated by spaces:\n");
    printf("If you'd like to stop, press Ctrl+D\n");
    
    //Read numbers until EOF
    while (1) {
    
        //Reading input as a string to validate
        if (scanf("%99s", input) == EOF) {
        
            break;
        
        }
        
        //Parsing input as a double for validation
        if (sscanf(input, "%lf", &num) != 1) {
        
            printf("Invalid input: %s\n", input);
            
        } else {
        
            if (num <= 100 && num >= 0) {
            
                
                fprintf(file, "%f\n", num);
            
            }
        
        }
    
    }
    
    fclose(file);
    printf("\nOnly numbers between 0 and 100 were written\n");
    
    return 0;

}
