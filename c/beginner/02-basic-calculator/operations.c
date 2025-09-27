#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "operations.h"

void additions() {
    float a, b;

    printf("Enter value number 1: ");
    if (scanf("%f", &a) != 1) {
    printf("Invalid input! Please enter a number.\n");
    while(getchar() != '\n');
    return;
}
    printf("Enter value number 2: ");
    if (scanf("%f", &b) != 1) {
    printf("Invalid input! Please enter a number.\n");
    while(getchar() != '\n');
    return;
}

    printf("Result: %f + %f = %.3f\n", a, b, a + b);
}

void subtraction() {
    float a, b;

    printf("Enter value number 1: ");
    if (scanf("%f", &a) != 1) {
    printf("Invalid input! Please enter a number.\n");
    while(getchar() != '\n');
    return;
}
    printf("Enter value number 2: ");
    if (scanf("%f", &b) != 1) {
    printf("Invalid input! Please enter a number.\n");
    while(getchar() != '\n');
    return;
}

    printf("Result: %f - %f = %.3f\n", a, b, a- b);
}

void multiplication() {

    float a, b;

    printf("Enter value number 1: ");
    if (scanf("%f", &a) != 1) {
    printf("Invalid input! Please enter a number.\n");
    while(getchar() != '\n');
    return;
}
    printf("Enter value number 2: ");
    if (scanf("%f", &b) != 1) {
    printf("Invalid input! Please enter a number.\n");
    while(getchar() != '\n');
    return;
}

    printf("Result: %f * %f = %.3f\n", a, b, a * b);
}

void division() {

    float a, b;
    bool cycle = true;

    while(cycle) {
        printf("Enter value number 1: ");
        if (scanf("%f", &a) != 1) {
    printf("Invalid input! Please enter a number.\n");
    while(getchar() != '\n');
    return;
}
        printf("Enter value number 2: ");
        if (scanf("%f", &b) != 1) {
    printf("Invalid input! Please enter a number.\n");
    while(getchar() != '\n');
    return;
}

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
    if (scanf("%d", &n) != 1) {
    printf("Invalid input! Please enter a number.\n");
    while(getchar() != '\n');
    return;
}
    printf("Enter the exponent: ");
    if (scanf("%d", &power) != 1) {
        printf("Invalid input! Please enter a number.\n");
        while(getchar() != '\n');
        return;
    }

    if(n == 0 && power >= 0) {
        printf("Result: %d ^ %d = %.3f\n", n, power, pow(n, power));
    } else if (n < 0) {
        printf("Cant calculate the power of a negative base\n");
    }
}

void root() {
    int index;
    float radicand;

    printf("Enter the radicand: ");
    if (scanf("%f", &radicand) != 1) {
        printf("Invalid input! Please enter a number.\n");
        while(getchar() != '\n');
        return;
    }
    printf("Enter the index of the root: ");
    if (scanf("%d", &index) != 1) {
    printf("Invalid input! Please enter a number.\n");
    while(getchar() != '\n');
    return;
}

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
    if (scanf("%d", &n) != 1) {
    printf("Invalid input! Please enter a number.\n");
    while(getchar() != '\n');
    return;
}

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return;
    }
    for(int i = 1; i <= n; i++) {
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
    if (scanf("%d", &n) != 1) {
    printf("Invalid input! Please enter a number.\n");
    while(getchar() != '\n');
    return;
}

    result = fibonacci_recursive(n);

    printf("Result: Fibonacci of %d = %llu\n", n, result);
}
