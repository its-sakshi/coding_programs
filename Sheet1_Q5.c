// C program to print the first 100 natural numbers using a while loop

#include <stdio.h>

int main() {
    int i = 1;  // starting number

    printf("The first 100 natural numbers are:\n");

    // while loop
    while (i <= 100) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}
