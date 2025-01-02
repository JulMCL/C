#include <stdio.h>
#include <stdlib.h>


typedef struct {

    int code;
    char name[20];
    float price;

} Item;


Item shopItems[5] = {

    {5984, "Apples", 2.50},
    {6679, "Cheese", 2.00},
    {3422, "Eggs", 3.00},
    {9543, "Bread", 1.50},
    {1093, "Papaya", 3.50}

};


int main(void) {
    
    float total;
    int run = 1;
    char option;
    int tracking[5] = {0};

    do {
    
        printf("\n\nChoose an option from the menu: \n");
        printf("1. Add items to shopping cart\n");
        printf("2. Show current total\n");
        printf("3. Check out\n");
        printf("4. Cancel session\n");
        printf("q. Quit\n");
        scanf(" %c", &option);
        
        switch (option) {
          
            case '1': 
            
                printf("\n\nOur items:\n");
                
                for (int i = 0; i < 5; i++) {
                
                    printf("%d\t%s\t€%.2f\n", shopItems[i].code, shopItems[i].name, shopItems[i].price);
                
                }
                
                int code, amount, found = 0;
                getchar();
                printf("\nEnter the code of the item you want:");
                scanf("%d", &code);
                
                for (int i = 0; i < 5; i++) {
                
                    if (shopItems[i].code == code) {
                    
                        printf("Enter the amount: ");
                        getchar();
                        scanf("%d", &amount);
                        
                        if (amount <= 0) {
                        
                            printf("Invalid quantity.\n");
                        
                        } else {
                        
                            tracking[i] += amount;
                            total += shopItems[i].price * amount;
                        
                        }
                        
                        found = 1;
                        break;
                    
                    }
                
                }
                
                if (!found) {
                
                    printf("Item not found\n");
                
                }
                
                break;
                
                
            case '2':
            
                printf("The current total is: €%.2f\n", total);
                
                break;
                
                
            case '3':
            
                printf("Checking out: \n");
                
                for (int i = 0; i < 5; i++) {
                
                    if (tracking[i] > 0) {
                    
                        printf("%d\t%s\t\t€%.2f\n", tracking[i], shopItems[i].name, tracking[i] * shopItems[i].price);
                    
                    }
                
                }
                
                printf("Total: €%.2f\n", total);
            
                break;
                
                
            case '4':
            
                printf("\nSession has been cancelled\n");
                
                for (int i = 0; i < 5; i++) {
                
                    tracking[i] = 0;
                
                }

                total = 0;
                break;
                
                
            case 'q': 
            
                printf("See you soon!\n");
                run = 0;
                
                break;
                
            default: printf("Enter an option from the menu\n");
        
        }
    
    } while (run);


    return 0;
    
}
