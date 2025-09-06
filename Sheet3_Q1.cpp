//program to read and display elementsa of array

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter the elememnts of array:"<<endl;
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    cout<<" array :"<<endl;
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
