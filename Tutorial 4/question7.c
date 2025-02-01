#include <stdio.h>
#include <stdlib.h>


int main() {

    int choice;
    
    do {
    
        printf("----- User Menu -----\n");
        printf("1. Run Program 1\n");
        printf("2. Run Program 2\n");
        printf("3. Run Program 3\n");
        printf("4. Run Program 4\n");
        printf("5. Run Program 5\n");
        printf("6. Run Program 6\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        
            case 2:
                system("./question2a");
                break;
                
            case 3:
                system("./question3a");
                break;
                
            case 4:
                system("./question4");
                break;
                
            case 5:
                system("./question5a");
                break;
                
            case 6:
                system("./question6a");
                break;
                
            case 7:
                printf("Exiting...\n");
                break;
                
            default:
            
                printf("Invalid choice, try again.\n");
                
        }

    } while (choice != 7);


    return 0;
    
}
