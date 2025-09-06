// to calculate row wise and column wise sum of a 2D array
#include <iostream>
using namespace std;
int main() {
int rows, col;
cout<<"enter the rows and columns of an array :";
cin>>rows>>col;
int arr[rows][col];
cout<<"enter the elements of an array:";
for(int i=0; i<rows; i++){
    for(int j=0; j<col; j++){
            cin>>arr[i][j];   
    }
}
for(int i=0; i<rows; i++){
    int rowsum=0;
    for(int j=0; j<col; j++){
        rowsum += arr[i][j];
    }
    cout<<"sum of "<<i<<" row is : "<< rowsum<<endl;
}
for(int i=0; i<col; i++){
     int colsum=0;
    for(int j=0; j<rows; j++){
        colsum += arr[j][i];
    }
    cout<<"sum of "<<i<<" column is : "<< colsum<<endl;
}
return 0;
}
