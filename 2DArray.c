//program to find the sum of diagonal elements, lower triangle and upper triangle in 2D Array
#include<stdio.h>
int main(){
int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
  int sumDiagonal =0, sumUp =0, sumDown =0;
  for(int i=0; i<3; i++){
   for(int j=0; j<3; j++){
    if( i==j){
      sumDiagonal += arr[i][j];
    }
     else if(i>j){
     sumDown+= arr[i][j];
     }
     else{
     sumUp+= arr[i][j];
     }
  }
  }
   printf("the sum of diagonal elements is %d", sumDiagonal);
   printf("\n the sum of Upper Triangle is %d", sumUp);
   printf("\n the sum of Lower Triangle is %d", sumDown);
}
