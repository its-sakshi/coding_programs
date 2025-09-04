//C program to print sum of all even numbers and odd numbers from 1 to n separately using a for loop.

#include <stdio.h>

int main() {
    int n, sum1 = 0, sum2 = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum1 += i;
        }
      else{
        sum2 += i;
    }

    printf("sum of even numbers : %d \n", sum1);
    printf("sum of odd numbers : %d \n", sum2);

    return 0;
}
