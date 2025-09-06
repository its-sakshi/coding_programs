//search an element in an array using binary search
#include<iostream>
using namespace std;
int binarysearch(int arr[], int s,int e, int ele){
    int mid = (s+e)/2;
    while(s<=e){
        if(arr[mid] == ele){
            return mid;
        }
        else if(ele > arr[mid]){
            s = mid+1;
        }
        else{
            e = mid -1;
        }
        mid = (s+e)/2;
    }
    return -1;
}
int main(){
    int n, ele;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter the elememnts of array in a sorted manner:"<<endl;
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
     cout<<" enter the element to be searched: ";
     cin>>ele;
        int index = binarysearch(arr, 0, n-1, ele);
    if(index == -1){
        cout<<"element is not present in array."<<endl;
    }
    else{
        cout<<"element is present at "<<index<<" index in array."<<endl;
    }
    return 0;
}
