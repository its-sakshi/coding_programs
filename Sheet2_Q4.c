//Write a program to reverse a number and check whether it is a palindrome.
#include<stdio.h>
int main(){
    int n, rev =0, rem;
    printf("enter a number :");
    scanf("%d", &n);
    int a =n;
    while(n!=0){
        rem = n%10;
        rev = (rev*10)+rem;
        n = n/10;
    }
    if(rev == a){
        printf("%d is palindrome.\n", a);
    }
    else{
                printf("%d is not palindrome.\n", a);

    }
    return 0;
}
