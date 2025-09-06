//rotate array by k positions
#include<iostream>
using namespace std;
void leftrotatebyone(int arr[], int n){
    int temp = arr[0];
    for(int i=0; i<n-1;i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}
void leftrotate(int arr[], int n, int k){
    for(int i=0; i<k ;i++){
        leftrotatebyone(arr,n);
    }
}
int main(){
    int n, k;
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
    cout<<"enter the positions to be roated :";
    cin>>k;
    leftrotate(arr,n,k);
    cout<<"array after "<<k<<" rotations :"<<endl;
     for(int i=0; i<n; i++){
       cout<<arr[i]<<" ";
     }
    return 0;
}
