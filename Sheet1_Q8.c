//C program to calculate the factorial of a number using a while loop:
#include <stdio.h>
int main() {
    int num, i = 1;
    unsigned long long fact = 1;  

    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        while (i <= num) {
            fact *= i;
            i++;
        }
        printf("Factorial of %d = %llu\n", num, fact);
    }

    return 0;
}
