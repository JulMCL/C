#include <stdio.h>
void butler(char* name);

int main (void){
    printf("I will summon the butler function.\n");
    butler("Mr. John");
    printf("Yes. Bring me some tea and writeable CD-ROMS.\n");
    
    return 0;
}

void butler(char* name){
    printf("You rang, %s?\n", name);
}
