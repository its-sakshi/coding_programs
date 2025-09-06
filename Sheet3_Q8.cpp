//merge two arrays into a single sorted array
#include<iostream>
using namespace std;
void bubblesort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0; j<n;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    int n1, n2;
    cout<<"enter the size of both the arrays:";
    cin>>n1 >>n2;
    int arr1[n1], arr2[n2];
        cout<<"enter the elememnts of first array :"<<endl;
    for(int i=0; i<n1;i++){
        cin>>arr1[i];
    }
     cout<<"enter the elememnts of second array :"<<endl;
    for(int i=0; i<n2;i++){
        cin>>arr2[i];
    }
    int n= n1+n2;
    int arr[n];
    
     for(int i=0; i<n1; i++){
       arr[i] = arr1[i];
     }
     for(int j=0; j<n2; j++){
       arr[n1+j] = arr2[j];
     }
    bubblesort(arr, n);
    cout<<"sorted and merge array "<<endl;
     for(int i=0; i<n; i++){
       cout<<arr[i]<<" ";
     }
     cout<<endl;
    return 0;
}
