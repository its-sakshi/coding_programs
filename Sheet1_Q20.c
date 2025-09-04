// sum of series 1+2+3+...........+n 

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
int sum = (n*(n-1))/2;
printf("sum of series :%d ", sum);
return 0;
}
