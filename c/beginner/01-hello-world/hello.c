#include <stdio.h>

#include "user_input.c"
#include "calculator.c"

int main(void) {

    printf("Hello, World!\n\n");

    char *name = getName();
    int age = getAge();

    printf("Hello %s! You are %d years old.\n", name, age);
    printf("Next year you will be %d.\n", age + 1);    

    float x, y;

    getNumbers(&x, &y);
    addition(x, y);
    subtraction(x, y);
    multiplication(x, y);
    division(x, y);
        
}
