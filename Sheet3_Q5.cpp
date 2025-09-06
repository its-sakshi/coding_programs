//search an element in an array using linear search
#include<iostream>
using namespace std;
int linearsearch(int arr[], int size, int ele){
    int index =-1;
    for(int i=0; i< size; i++){
        if(arr[i] == ele){
            return i; 
        }
    }
    return index;
}
int main(){
    int n, ele;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter the elememnts of array:"<<endl;
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
     cout<<" enter the elements to be searched: ";
     cin>>ele;
        int index = linearsearch(arr, n, ele);
    if(index == -1){
        cout<<"element is not present in array."<<endl;
    }
    else{
        cout<<"element is present at "<<index<<" index in array."<<endl;
    }
    return 0;
}
