#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "operations.h"

void additions() {
    float a, b;

    printf("Enter value numeber 1: ");
    scanf("%f", &a);
    printf("Enter value number 2: ");
    scanf("%f", &b);

    printf("Result: %f + %f = %.3f\n", a, b, a + b);
}

void subtraction() {
    float a, b;

    printf("Enter value numeber 1: ");
    scanf("%f", &a);
    printf("Enter value number 2: ");
    scanf("%f", &b);

    printf("Result: %f - %f = %.3f\n", a, b, a- b);
}

void multiplication() {

    float a, b;

    printf("Enter value numeber 1: ");
    scanf("%f", &a);
    printf("Enter value number 2: ");
    scanf("%f", &b);

    printf("Result: %f * %f = %.3f\n", a, b, a * b);
}

void division() {

    float a, b;
    bool cycle = true;

    while(cycle) {
        printf("Enter value numeber 1: ");
        scanf("%f", &a);
        printf("Enter value number 2: ");
        scanf("%f", &b);

        if(b == 0) {
            printf("Cant devide by 0, try again!\n");
        } else {
            cycle = false;
        }
    }

    printf("Result: %f / %f = %.3f\n", a, b, a / b);
}

void power() {
    int n, power;
        
    printf("Enter the base: ");
    scanf("%d", &n);
    printf("Enter the exponent: ");
    scanf("%d", &power);

    if(n == 0 && power >= 0) {
        printf("Result: %d ^ %d = %i\n", n, power, n ^ power);
    } else if (n < 0) {
        printf("Cant calculate the power of a negative base\n");
    }
}

void root() {
    int index;
    float radicand;

    printf("Enter the radicand: ");
    scanf("%f", &radicand);
    printf("Enter the index of the root: ");
    scanf("%d", &index);

    if(radicand < 0 && index % 2 == 0) {
        printf("Cant do the root of a negative number when the index is even\n");
        return;
    } else if(index == 0) {
        printf("Cant do the root given index 0\n");
        return;
    } else if(radicand == 0 && index < 0) {
        printf("Cant do the root of a 0 with a negative index\n");
    } else {
        double result = pow(radicand, 1.0 / index);
        printf("Result: %d-th root of %.3f = %.6f\n", index, radicand, result);
    }
}

void factorial() {

    int n;
    unsigned long long result = 1;

    printf("Enter the value of the number: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        result *= i;
    }

    printf("Result: !%d = %llu\n", n, result);
}

unsigned long long fibonacci_recursive(int n) {
        if(n == 0) return 0;
        if(n == 1) return 1;
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

void fibonacci() {
    int n;
    unsigned long long result;

    printf("Enter the value of the number: ");
    scanf("%d", &n);

    result = fibonacci_recursive(n);

    printf("Result: Fibonacci of %d = %llu\n", n, result);
}
