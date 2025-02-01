#include <stdio.h>
#include <string.h>

#define SIZE 3
#define NLEN 30


typedef char employees[NLEN];


typedef struct {
    
    employees fname;
    employees lname;
    employees id;
    double salary;
    
} database;


int main(void) {
    
    database people[SIZE] = { {"Julian", "Zarb", "D562", 1800},  {"Jack", "Mizzi", "C069", 2300}, {"Karlu", "Scicluna", "Z420", 1000} };
    
    
    int swapped = 1;
    for (int i = 0; i < SIZE-1; i++) {
    
        swapped = 0;
        
        for (int j = 0; j < SIZE-1; j++) {
        
            if (strcmp(people[j].id, people[j+1].id) > 0) {
            
                database temp = people[j];
                people[j] = people[j + 1];
                people[j + 1] = temp;
                swapped = 1;            
            
            }
        
        }
        
        if (swapped == 0) {
            
                break;
            
        }
    
    }
    
    printf("Sorted database by ID:\n");
    
    for (int i = 0; i < SIZE; i++) {
    
        printf("Name: %s %s | ID: %s | Salary: %.2f\n",
               people[i].fname, people[i].lname, people[i].id, people[i].salary);
               
    }
    
    
    int swapped2 = 1;
    for (int i = 0; i < SIZE-1; i++) {
    
        swapped2 = 0;
        
        for (int j = 0; j < SIZE-1; j++) {
        
            if (strcmp(people[j].lname, people[j+1].lname) > 0) {
            
                database temp = people[j];
                people[j] = people[j + 1];
                people[j + 1] = temp;
                swapped2 = 1;            
            
            }
        
        }
        
        if (swapped2 == 0) {
            
                break;
            
        }
    
    }
    
    printf("Sorted database by surname:\n");
    
    for (int i = 0; i < SIZE; i++) {
    
        printf("Name: %s %s | ID: %s | Salary: %.2f\n",
               people[i].fname, people[i].lname, people[i].id, people[i].salary);
               
    }
    

    return 0;

}
