#include"mbed.h"

void Led(DigitalOut &ledpin) {
    for (int i = 0; i < 10; i++) {
        ledpin = !ledpin;
        ThisThread::sleep_for(100ms);
    }
}