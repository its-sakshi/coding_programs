//reverse of an array
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
    cout<<"original array :"<<endl;
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"reverse of array :"<<endl;
    int s =0, e = n-1;
    while(s<=e){
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
        }
        cout<<endl;

    return 0;
}
