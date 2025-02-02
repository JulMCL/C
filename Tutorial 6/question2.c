#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void replace(FILE* sourceFile, FILE* tempFile, FILE* finalFile, char *target, char *replace) {
   
    char line[1024];
    char *start;
    
    while (fgets(line, sizeof(line), sourceFile)) {
    
        char *pos;
        start = line;
        
        while ((pos = strstr(start, target)) != NULL) {
        
            int len = pos - start;
            fwrite(start, 1, len, tempFile);
            fwrite(replace, 1, strlen(replace), tempFile);
            start = pos + strlen(target);
            
        }
        
        fputs(start, tempFile);
        
    }

}



int main(void) {

    FILE *fSource, *fTemp, *fFinal;
    char targetWord[100], replaceWord[100];

    printf("Enter the word that you would like to replace: \n");
    fgets(targetWord, sizeof(targetWord), stdin);
    targetWord[strcspn(targetWord, "\n")] = '\0';

    printf("Enter the word that you would like to replace with: \n");
    fgets(replaceWord, sizeof(replaceWord), stdin);
    replaceWord[strcspn(replaceWord, "\n")] = '\0';


    fSource = fopen("question1.txt", "r");
    
    if (fSource == NULL) {
    
        printf("Error opening source file.\n");
        return 1;
        
    }
    

    fTemp = fopen("tempfile.txt", "w");
    
    if (fTemp == NULL) {
    
        printf("Error creating temporary file.\n");
        return 1;
        
    }
    
    
    fFinal = fopen("finalfile.txt", "w");
    
    if (fFinal == NULL) {
    
        printf("Error creating final file.\n");
        return 1;
        
    }
    

    replace(fSource, fTemp, fFinal, targetWord, replaceWord);

    fclose(fSource);
    fclose(fTemp);
    fclose(fFinal);

    
    printf("Replacement completed successfully.\n");


    return 0;
    
}
