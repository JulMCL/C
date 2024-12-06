#include <stdio.h>

void mean(int arr[], int input);
void mode(int arr[], int input);
void median(int arr[], int input);

int main(void) {

    int input;

    do {
    
        printf("How many numbers will you be entering (max 20)?\n");
        scanf("%d", &input);
    
    } while (input > 20 || input < 1);
    
    
    int arr[input];
    
    
    for (int i = 0; i < input; i++) {
    
        int num;    
        printf("\n\nEnter your number (between 1 and 100):\n");
        scanf("%d", &num);
        
        while (num > 100 || num < 1){
                
              printf("\nEnter a number within the range:\n");
              scanf("%d", &num);
                
        }
            
        arr[i] = num;
            
    }
        

    int swapped = 1;
    
    for (int i = 0; i < input - 1; i++) {
        
        swapped = 0;
        
        for (int j = 0; j < input - 1; j++) {
        
            if (arr[j] > arr[j + 1]) {
            
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
                
            }
            
        }
        
        if (swapped == 0) {
            break;
        }
        
    }
    

    mean(arr, input);
    mode(arr, input);
    median(arr, input);

    return 0;
}


void mean(int arr[], int input) {
    
    int sum = 0;
    
    for (int i = 0; i < input; i++) {
        
        sum += arr[i];
    
    }
    
    double mean = (double)sum / input;
    
    printf("\n\nThe mean of the numbers is %.2f\n", mean);

}


void mode(int arr[], int input) {

    int max = 0, max_count = 0;

    for (int i = 0; i < input; i++) {
    
        int count = 0;

        for (int j = 0; j < input; j++) {
        
            if (arr[j] == arr[i]) {
            
                count++;
                
            }
        }
        
        if (count > max_count) {
        
            max_count = count;
            max = arr[i];
            
        }
        
    }
    
    if (max_count > 1) {
    
        printf("The mode is %d, it appears %d time(s)\n", max, max_count);
        
    } else {
    
        printf("There is no mode (all numbers appear only once)\n");
        
    }

}


void median(int arr[], int input) {

    double median;

    if (input % 2 == 0) {
    
        int middle = input / 2;
        median = (arr[middle - 1] + arr[middle]) / 2.0;
        printf("\n\nThe median of the numbers is %.2f\n", median);
            
    } else {
    
        int middle = input / 2;
        median = arr[middle];
        printf("\n\nThe medain of the numbers is %.0f\n", median);
    
    }

}
