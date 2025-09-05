// program to check whether a number is positive, negative, or zero using if else. 
#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d", &n);
    if(n == 0){
        printf("number is zero. \n");
    }
    else if(n>0){
        printf("number is positive. \n");
    }
    else{
        printf("number is negative. \n");
    }
    return 0;
}
