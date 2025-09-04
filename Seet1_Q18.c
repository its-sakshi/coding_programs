// C program to count the number of digits in an integer using a while loop:

#include <stdio.h>
int main() {
    int num, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num == 0) {
        count = 1;
    } else {
        if (num < 0) {
            num = -num;
        }

        while (num != 0) {
            num /= 10;  
            count++;
        }
    }
    printf("Number of digits in the integer = %d\n", count);

    return 0;
}
