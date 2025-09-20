#include <stdio.h>


int main() {
    char L;

    printf("What is Light colour: ");
    scanf(" %c", &L);   

    if (L == 'R' || L == 'r') {
        printf("Stop\n");
    }
    else {
        if (L == 'Y' || L == 'y') {
            printf("Caution\n");
        }
        else {
            if (L == 'G' || L == 'g') {
                printf("Go\n");
            }
            else {
                printf("Invalid option\n");
            }
        }
    }

    return 0;
}

