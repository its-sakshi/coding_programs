// transpose of a matrix

#include <iostream>
using namespace std;
int main() {
    int r, c;
    cout<<"enter the rows and columns of matrix : ";
    cin>>r>>c;
    int arr[r][c],newarr[c][r];
    cout<<"enter the elemnts of a matrix : ";
    for(int i=0; i<r; i++){
        for(int j =0; j<c; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"original matrix : "<<endl;
    for(int i=0; i<r; i++){
        for(int j =0; j<c; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"transpose of a matrix is :"<<endl;
    for(int i=0; i<c; i++){
        for(int j =0; j<r; j++){
            newarr[i][j] = arr[j][i];
            cout<<newarr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
