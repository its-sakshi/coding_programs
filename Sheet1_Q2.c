// c program to find the largest no. among thre numbers using nested if-else

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a>=c) {
            printf("%d is the largest number.\n", a);
        } 
    else if(c >= b && c>=a){
            printf("%d is the largest number.\n", c);
        }
     else {
            printf("%d is the largest number.\n", b);
        } 

    return 0;
}
