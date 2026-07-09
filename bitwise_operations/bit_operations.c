#include<stdio.h>
#include <stdint.h>

#define SET_BIT(REG, BIT)    ((REG) |= (1 << (BIT)))
#define CLEAR_BIT(REG, BIT)  ((REG) &= ~(1 << (BIT)))
#define TOGGLE_BIT(REG, BIT) ((REG) ^= (1 << (BIT)))
#define CHECK_BIT(REG, BIT)  (((REG) & (1 << (BIT))) >> (BIT))

int main(){

    uint8_t status_register = 0;

    SET_BIT(status_register, 3);
    printf("After SET bit 3: %d\n", status_register);

    TOGGLE_BIT(status_register, 1);
    printf("After TOGGLE bit 1: %d\n", status_register);

    if (CHECK_BIT(status_register, 3)) {
        printf("Bit 3 is currently HIGH (1)\n");
    }

    CLEAR_BIT(status_register, 3);
    printf("After CLEAR bit 3: %d\n", status_register);
    
}