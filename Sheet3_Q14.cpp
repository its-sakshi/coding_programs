// multiplication of two matrix

#include <iostream>
using namespace std;
int main() {
    int r1, c1, r2,c2;
    cout<<"enter the rows and columns of first matrix : ";
    cin>>r1>>c1;
    int arr1[r1][c1];
    cout<<"enter the elemnts of first matrix : ";
    for(int i=0; i<r1; i++){
        for(int j =0; j<c1; j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"enter the rows and columns of second matrix : ";
    cin>>r2>>c2;
    int arr2[r2][c2], result[r1][c2];
    cout<<"enter the elemnts of second matrix : ";
     for(int i=0; i<r2; i++){
        for(int j =0; j<c2; j++){
            cin>>arr2[i][j];
        }
    } if(c1 == r2){
    cout<<"multiplication of two matrix is : "<<endl;
    for(int i=0; i<r1; i++){
        for(int j =0; j<c2; j++){
             result[i][j] = 0;
             for(int k =0; k<r2; k++){
                 result[i][j] += arr1[i][k] * arr2[k][j];
             }
             cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    }
  else{
      cout<<"multiplication of matrix is not possible"<<endl;
  }
    
    return 0;
}
