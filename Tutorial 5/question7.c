#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


union Address {

    uint32_t final_address;
    char octets[4];

};


int main(void) {

    union Address ip;
    unsigned int p1, p2, p3, p4;
    
    printf("Enter an IPv4 address:\n");
    
    if (scanf("%u.%u.%u.%u", &p1, &p2, &p3, &p4) != 4) {
    
        printf("Invalid input.\n");
        return 1;
    
    }
    
    ip.octets[0] = (char)p4;
    ip.octets[1] = (char)p3;
    ip.octets[2] = (char)p2;
    ip.octets[3] = (char)p1;
    
    printf("Address in Octet Form: %u.%u.%u.%u\n", p1, p2, p3, p4);
    
    printf("Address in Hex Form: 0x%08X\n", ip.final_address);
    
    
    return 0;

}
