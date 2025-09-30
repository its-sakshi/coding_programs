//maximum and minimum of elements in an array
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
    int max = arr[0] , min = arr[0];
    for(int i=0; i<n;i++){
        if(arr[i]> max){
            max = arr[i];
        }
        else if(arr[i]< min){
            min = arr[i];
        }
        
        }
    cout<<"maximum element of array :"<<max<<endl;
        cout<<"minimum element of array :"<<min<<endl;



    return 0;
}
