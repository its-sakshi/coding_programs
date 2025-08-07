// program to check whether the given number is armstrong or not
#include<stdio.h>
int main(){
int n ,rem, cube =0;
printf("enter a number :");
scanf("%d", &n);
int a =n;
while(n!=0){
    rem = n%10;
    cube += (rem*rem*rem);
  n = n/10;
}
  if(cube == a){
    printf("\n %d is armstrong number \n", a);
}
else{
    printf("%d is not a armstrong number \n", a);
}
}
