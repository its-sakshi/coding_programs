//sort an array using bubble sort
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
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter the elememnts of array to be sorted :"<<endl;
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
     cout<<"original array "<<endl;
     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
    bubblesort(arr, n);
    cout<<"sorted array "<<endl;
     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;

    return 0;
}
