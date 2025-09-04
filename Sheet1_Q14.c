// C program that prints numbers from 1 to 100 but skips multiples of 5 using continue statement

#include <stdio.h>

int main() {
    int i;

    printf("Numbers from 1 to 100 except multiples of 5:\n");

    for (i = 1; i <= 100; i++) {
        if (i % 5 == 0) {
            continue;  
        }
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
