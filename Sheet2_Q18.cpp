// merge two sorted arrays into one using pointers

#include <iostream>
using namespace std;
int main() {
    int n1, n2;
    cout << "Enter size of first array: ";
    cin >> n1;
    cout << "Enter size of second array: ";
    cin >> n2;
    int arr1[n1], arr2[n2], merged[n1 + n2];
cout << "Enter " << n1 << " sorted elements for first array:\n";
    for (int i = 0; i < n1; i++) cin >> arr1[i];

    cout << "Enter " << n2 << " sorted elements for second array:\n";
    for (int i = 0; i < n2; i++) cin >> arr2[i];

    int *p1 = arr1, *p2 = arr2, *pm = merged;
    int *end1 = arr1 + n1, *end2 = arr2 + n2;
while (p1 < end1 && p2 < end2) {
        if (*p1 < *p2) {
            *pm = *p1;
            p1++;
        } else {
            *pm = *p2;
            p2++;
        }
        pm++;
    }
  while (p1 < end1) {
        *pm = *p1;
        p1++;
        pm++;
    }
    while (p2 < end2) {
        *pm = *p2;
        p2++;
        pm++;
    }
    cout << "\nMerged sorted array:\n";
    for (int i = 0; i < n1 + n2; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;
    return 0;
}
