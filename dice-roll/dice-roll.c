#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char choice;
    int dice;

    srand(time(0)); // seed random number generator

    do {
        dice = (rand() % 6) + 1;
        printf("You rolled a %d!\n", dice);
        printf("Roll again? (y/n): ");
        scanf(" %c", &choice);
    } while(choice == 'y' || choice == 'Y');

    printf("Thanks for playing!\n");
    return 0;
}
