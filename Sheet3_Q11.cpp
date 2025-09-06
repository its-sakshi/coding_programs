// a program to find the second largest number in an array

#include <iostream>
using namespace std;
int main() {
int n;
cout<<"enter the size of an array :";
cin>>n;
int arr[n];
cout<<"enter the elements of an array:";
for(int i=0; i<n; i++){
    cin>>arr[i];
}
int largest =arr[0];
int second_largest;
for(int i=1; i<n; i++){
    if(arr[i] > largest){
        second_largest= largest;
        largest = arr[i];
    }
}
cout<<"second largest element in array is: "<<second_largest<<endl;
    return 0;
}
