#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void replace(FILE* sourceFile, FILE* writeFile, char *target, char *replace) {

    fseek(sourceFile, 0, SEEK_END);
    long file_size = ftell(sourceFile);
    rewind(sourceFile);
    
    
    char *content = (char *)malloc(file_size + 1);
    
    if (content == NULL) {
    
        printf("Error allocating memory");
        return;
    
    }
    
    
    fread(content, 1, file_size, sourceFile);
    content[file_size] = '\0';
    
    char *start = content;
    char *pos;
    
    while ((pos = strstr(start, target)) != NULL) {
    
        int len = pos - start;
        fwrite(start, 1, len, writeFile);
        fwrite(replace, 1, strlen(replace), writeFile);
        start = pos + strlen(target);
    
    }
    
    fputs(start, writeFile);
    
    free(content);

}



int main(void) {

    FILE *fSource, *fTemp;
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
        fclose(fSource);
        return 1;
        
    }
    

    replace(fSource, fTemp, targetWord, replaceWord);

    fclose(fSource);
    fclose(fTemp);

    rename("tempfile.txt", "newfile.txt");
    
    printf("Replacement completed successfully.\n");


    return 0;
    
}
