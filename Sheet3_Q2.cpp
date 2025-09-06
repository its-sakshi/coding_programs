//sum and average of elements in an array
#include<iostream>
using namespace std;
int main(){
    int n, sum =0;
    float avg =0;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter the elememnts of array:"<<endl;
    for(int i=0; i<n;i++){
        cin>>arr[i];
        sum+= arr[i];
    }
    avg = sum/n;

    cout<<"sum of elements of array :"<<sum<<endl;
        cout<<"average of elements of array :"<<avg<<endl;

    return 0;
}
