// right angled triangle star pattern 

#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the length :";
    cin>>n;
    for(int i=1; i<=n ;i++){
        int j=1;
        while(j <= i){
            cout<<"*";
            j++;
        }
        cout<<endl;
    }
    return 0;
}
