//this version of the test driver results in the extra array elements which cannot be copied since they do not exist in the original array to contain garbage values

#include <stdio.h>
#include <stdlib.h>


void print(int* array, int size) {

    for (int i = 0; i < size; i++) {
    
        printf("%d ", array[i]);
    
    }

}



int* copy(int* source, int size) {

    int* destination = (int*)malloc(size * sizeof(int));
    
    if (destination == NULL) {
    
        printf("Memory allocation failed");
        exit(1);
    
    }
    
    for (int i = 0; i < size; i++) {
    
        destination[i] = source[i];
    
    }
    
    return destination;

}



int main(void) {
    
    int start[] = {2, 4, 6};
    int size = sizeof(start) / sizeof(start[0]); //calculating the size of the array
    
    int* finish = copy(start, 10);
    
    printf("Starting Array: ");
    print(start, size);
    
    printf("\n\nCopied array: ");
    print(finish, 10);
    
    free(finish);
    
    
    return 0;

}
