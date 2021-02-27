#include "mbed.h"

DigitalOut myled1(LED1);
DigitalOut myled3(LED3);

void light1(DigitalOut &ledpin);
void light2(DigitalOut &ledpin);

int main() {
    myled1 = 1;
    myled3 = 1;

    while(1) {
        light1(myled1);
        light2(myled3);
    }
}

void light1(DigitalOut &ledpin) {
    for (int i = 0; i < 4; i++) {
        ledpin = !ledpin;
        ThisThread::sleep_for(100ms);
    }
}

void light2(DigitalOut &ledpin) {
    for (int i = 0; i < 6; i++) {
        ledpin = !ledpin;
        ThisThread::sleep_for(100ms);
    }
}