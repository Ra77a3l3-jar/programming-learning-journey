#include <stdio.h>

void addition(float a, float b) {
    printf("%f + %f = %0.2f\n", a, b, a + b);
}

void subtraction(float a, float b) {
    printf("%f - %f = %0.2f\n", a, b, a - b);
}

void multiplication(float a, float b) {
    printf("%f * %f = %0.2f\n", a, b, a * b);    
}

void division(float a, float b) {
    printf("%f / %f = %0.2f\n", a, b, a / b);    
}
