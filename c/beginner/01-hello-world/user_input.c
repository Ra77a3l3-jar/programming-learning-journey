#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* getName() {
    char temp[256];
    
    printf("What's your name? ");
    scanf("%255s", temp);

    char *name = malloc(strlen(temp) + 1);
    if (!name) {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    strcpy(name, temp);
    return name;
}

int getAge() {
    int age = 0;
    printf("How old are you? ");
    scanf("%d", &age);
    return age;
}

void getNumbers(float *a, float *b) {
    printf("Enter two numbers: ");
    scanf("%f %f", a, b); 
}
