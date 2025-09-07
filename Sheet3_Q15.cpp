// to check if two matrices are equal or not

#include <iostream>
using namespace std;
int main() {
    int r1, c1, r2, c2;
    
    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;
    if (r1 != r2 || c1 != c2) {
        cout << "Matrices are not equal." << endl;
        return 0;
    }
    int arr1[r1][c1], arr2[r2][c2];
    cout << "Enter elements of first matrix: " << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> arr1[i][j];
        }
    }
    cout << "Enter elements of second matrix: " << endl;
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> arr2[i][j];
        }
    }
    bool equal = true;
    for (int i = 0; i < r1 && equal; i++) {
        for (int j = 0; j < c1; j++) {
            if (arr1[i][j] != arr2[i][j]) {
                equal = false;
                break;
            }
        }
    }
    if (equal)
        cout << "Matrices are equal." << endl;
    else
        cout << "Matrices are not equal." << endl;
    return 0;
}
