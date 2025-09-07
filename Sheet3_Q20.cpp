// Floyd's Triangle using nested loops

#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the length :";
    cin>>n;
    int count =1;
    for(int i=1; i<=n ;i++){
        int j=1;
        while(j <= i){
            cout<<count<<" ";
            j++;
            count++;
        }
        cout<<endl;
    }
    return 0;
}
