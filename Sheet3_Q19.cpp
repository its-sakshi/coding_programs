// pascal's triangle

#include <iostream>
using namespace std;
int nCr(int n, int r) {
    if (r > n - r) r = n - r; 
    int result = 1;
    for (int i = 0; i < r; i++) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}
int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int space = 0; space < n - i - 1; space++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << nCr(i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}
