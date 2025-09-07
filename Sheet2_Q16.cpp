// pyramid pattern of stars

#include<iostream>
using namespace std;
int main(){
  int rows;
  cout<<"enter the rows :";
  cin>> rows;
for (int i = 1; i <= rows; i++) {
        for (int k = 1; k <= rows - i; k++) {
            printf(" ");
        }

        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
