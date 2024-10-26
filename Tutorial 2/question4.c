#include <stdio.h>
#include <string.h>


//A structure holding employee data
struct Employee{
    char name[11];
    char surname[11];
    int age;
    float salary;
    float yearlySalary;
};

void displayTable(struct Employee employees[], int count, int precision){
    printf("\n%-5s %-10s %-10s %-5s %-10s %-15s\n", "No.", "Name", "Surname", "Age", "Salary", "Yearly Total");
    printf("------------------------------------------------------------\n");
    
    for(int i = 0; i < count; i++){
        printf("%-5d %-10.10s %-10.10s %-5d $%-9.*f $%-14.*f\n", 
               i + 1, // counter
               employees[i].name, 
               employees[i].surname, 
               employees[i].age, 
               precision, employees[i].salary,
               precision, employees[i].yearlySalary);
    }
}

int main(){
    float averageSalary;

    int precision;
    printf("Enter the precision for salary display:\n");
    scanf("%d", &precision);
    
    while(precision < 0){
        printf("Enter a non-negative number for precision:");
        scanf("%d", &precision);
    }

    struct Employee employees[10];
    printf("Enter info for each of the 10 employees:\n");

    for(int i = 1; i <= 10; i++){
        printf("\nEmployee %d\n", i);
        
        printf("Enter name:\n");
        char inputName[30]; //temporary buffer
        scanf("%29s", inputName);
        strncpy(employees[i-1].name, inputName, 10); //copy and truncate
        employees[i - 1].name[10] = '\0'; // Ensure null termination
        
        
        printf("Enter surname:\n");
        char inputSurname[30];
        scanf("%29s", inputSurname);
        strncpy(employees[i-1].surname, inputSurname, 10); // Copy and truncate
        employees[i-1].surname[10] = '\0'; // Ensure null termination
        
        printf("Enter age:\n");
        scanf("%d", &employees[i-1].age);
        
        printf("Enter salary:\n");
        scanf("%f", &employees[i-1].salary);
        averageSalary += employees[i-1].salary;
        employees[i-1].yearlySalary = 13*employees[i-1].salary;
    
        if(i == 5){
          displayTable(employees, 5, precision);
        }
    }
    
    displayTable(employees, 10, precision);
    
    printf("\n\nAverage Monthly Salary: %f\n", averageSalary/10);
    
    return 0;
}
