#include <stdio.h>
#include <stdlib.h>


int main(void) {

    double ***arr = (double ***)malloc(x * sizeof(double **));
    
    
    for (int i = 0; i < x; i++) {
    
        arr[i] = (double **)malloc(y * sizeof(double *));
        
        for (int j = 0; j < y; j++) {
        
            arr[i][j] = (double *)malloc(z * sizeof(double));
            
        }
    }
    
    
    for (int i = 0; i < 101; i++) {
    
        for (int j = 0; j < 101; j++) {
        
            for (int k = 0; k < 101; k++) {
            
                arr[i][j][k] = x + 6.0*y + 7.2*z;
            
            }
        
        }
    
    }
    
    
    for (int i = 0; i < 101; i++) {
    
        for (int j = 0; j < 101; j++) {
        
            free(arr[i][j]);
        
        }
        
        free(arr[i]);
    
    }
    
    free(arr);
    

    return 0;

}
