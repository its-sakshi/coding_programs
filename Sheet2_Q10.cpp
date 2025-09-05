// program to swap two numbers using pointer and a function(call by reference)
#include<iostream>
using namespace std;
void swap(int *a, int *b){
       int temp =*a;
       *a = *b;
       *b = temp;
   }
int main(){
   int a , b;
   cout<<"enter two numbers :"<<endl;
   cin>>a>>b;
   cout<<"before swapping a = "<<a<<" and b= "<<b<<endl;
   swap(&a, &b);
      cout<<"after swapping a = "<<a<<" and b= "<<b<<endl;

  return 0;
}
