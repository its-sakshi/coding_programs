// C program to check whether a number is even or odd using if else statement 

#include<iostream.h>
using namespace std;
int main(){
  int n;
  printf("enter a number :");
  scanf("%d", &n);
  
    if (num % 2 == 0) {
        printf("%d is Even.\n", n);
    } else {
        printf("%d is Odd.\n", n);
    }
return 0;
}
