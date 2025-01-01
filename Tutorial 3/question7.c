#include <stdio.h>
#include <string.h>
#include <ctype.h>


void warningOne(char word[], int *error, int end);
void warningTwo(char word[], int *error, int end);
void warningThree(char word[], int *error);
void processFile(char *filename);


int main(void) {

    int input = 1;
    int errors = 0;
    char word[100];
    int end;

    do {

        printf("\n\nEnter a word (0 to quit): \n");
        scanf("%[^\n]", word);


        if (strcmp(word, "0") == 0) {

            input = 0;

        } else {

            for (int i = 0; i < 100; i++) {//locating the end of the input

                if (word[i] == '\0'){

                      end = i;
                      break;

                }

            }


            printf("\n\nLet's check for warning 1: \n");


            if (end > 9) {

                warningOne(word, &errors, end);

            } else{

                printf("No error found!\n");

            }


            printf("\n\nLet's check for warning 2: \n");
            warningTwo(word, &errors, end);

            printf("\n\nLet's check for warning 3: \n");
            warningThree(word, &errors);

            if (errors == 0) {

                printf("\nNo errors found\n");

            } else if (errors == 1) {

                printf("\n1 error found\n");

            } else {

                printf("\n%d errors found\n", errors);

            }

        }

        // Reset errors for the next word
        errors = 0;

    } while (input == 1);
    
    
    printf("\n\n\nNow we will test on a text file\n");
    char filename[100];
    printf("\nEnter the filename: ");
    scanf("%s", filename);
    processFile(filename);



    return 0;

}


void processFile(char *filename){

    int end;
    int errors = 0;
    char word[100];
    
    FILE *file = fopen(filename, "r");
    
    if (!file) {
    
        printf("\nCannot open file %s\n", filename);
        
    } else {
    
        printf("\nOpening file: %s\n", filename);
    
    }
    
    while (fscanf(file, "%99s", word) == 1) {
    
        end = strlen(word);
        
        if (end > 9) {
        
            warningOne(word, &errors, end);
            
        }

        warningTwo(word, &errors, end);

        warningThree(word, &errors);
    }
    
    fclose(file);

    if (errors == 0) {
    
        printf("\nNo errors found in the file.\n");
        
    } else if (errors == 1) {
    
        printf("\n1 error found in the file.\n");
        
    } else {
        printf("\n%d errors found in the file.\n", errors);
    }
    
}


void warningOne(char word[], int *error, int end) {
    
    int hyphen = 0;
    
    for (int i = 0; i < end; i++) {

        if (word[i] == '-') {

            hyphen = 1;
            
        }

    }
    
    
    if (!hyphen) { 
    
        (*error)++;
        printf("Warning: Your word is longer than 10 characters and does not include a hypen!\n");
    
    }


}


void warningTwo(char word[], int *error, int end) {

    for (int i = 1; i < end; i++) {

        if (isupper(word[i])) {

            (*error)++;
            printf("Warning: Your word contains an uppercase letter after the first character.\n");
            break;

        }

    }


}


void warningThree(char word[], int *error) {
    
    if (isalpha(word[0])) {
            
            printf("No errors found!\n");
            
    } else {
    
          printf("Your first character is not part of the alphabet!\n");
          (*error)++;    
          
    }

}
