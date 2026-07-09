#include <stdio.h>
#include "sensor.h"

int main(void) {
    float temperature = read_temperature();
    printf("Temperature: %.1f C\n", temperature);
    return 0;
}