#include <stdio.h>

volatile int sensor_ready = 0;

void sensor_interrupt_handler(void) {
    sensor_ready = 1;
}

int main(void) {
    sensor_interrupt_handler();  // simulate an interrupt

    if (sensor_ready == 1) {
        printf("Sensor data is ready\n");
    }

    return 0;
}