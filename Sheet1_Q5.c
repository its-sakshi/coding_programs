// C program to print the sum of first 100 natural numbers using a while loop

#include <stdio.h>

int main() {
    int i = 1, sum =0;  

    printf("The first 100 natural numbers are:\n");
    while (i <= 100) {
        sum += i;
        i++;
    }
            printf("%d\n", sum);

    return 0;
}
