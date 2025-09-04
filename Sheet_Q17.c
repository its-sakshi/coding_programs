// c program to check whether a number is palindrome or not using while loop

#include<stdio.h>
int main(){
  int n ,rem, rev =0;
  printf("enter a number :");
  scanf("%d", &n);
  int a =n;
  while(n!=0){
    rem = n%10;
    rev = (rev *10)+rem;
    n = n/10;
    }
  if(rev == a){
    printf("%d is palindrome number \n", a);
  }
  else{
    printf("%d is not a palindrome number \n", a);
  }
  return 0;
}
