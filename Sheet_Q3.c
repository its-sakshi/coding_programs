//Write a function to find the factorial of a number using recursion. 
#include<stdio.h>
int factorial(int n){
    if(n == 0){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int n;
    printf("enter a number :");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("factorial of %d is : %d \n", n, fact);
    return 0;
}
