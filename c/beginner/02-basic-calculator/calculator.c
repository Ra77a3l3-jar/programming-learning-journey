#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "operations.h"

void options(int choice) {

    switch(choice) {
        case 1:
            additions();
            return;
        case 2:
            subtraction();
            return;
        case 3:
            multiplication();
            return;
        case 4:
            division();
            return;
        case 5:
            power();
            return;
        case 6:
            root();
            return;
        case 7:
            factorial();
            return;
        case 8:
            fibonacci();
            return;
        case 0:
            printf("Exiting ... ");
            exit(1);
        default:
            printf("Wrong input! Try again\n");
            return;            
    }
}

void menu() {

    printf("=== Advanced Calculator ===\n");    
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power\n");
    printf("6. Root\n");
    printf("7. Factorial\n");
    printf("8. Fibonacci\n");
    printf("0. Quit\n");
}

int main(void) {
    bool cycle = true;

    do {
        menu();
        int choice = -1;

        printf("Choose operation (0-8): ");
        scanf("%d", &choice);

        options(choice);

        char again;
        printf("Continue (y/n): ");
        scanf(" %c", &again);
        if(again != 'y' && again != 'Y') {
            cycle = false;
        }
    } while(cycle);

    return 0;
}
