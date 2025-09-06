//find duplicate elements in array
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
        cout<<"enter the elememnts of array :"<<endl;
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    cout<<"array is : "<<endl;
     for(int i=0; i<n; i++){
       cout<<arr[i]<<" ";
     }
     cout<<endl;
     cout<<"duplicate elements are : ";
     for(int i=0;i<n-1;i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                cout<< arr[i]<<" ";
                break;
            }
        }
     }
    return 0;
}
