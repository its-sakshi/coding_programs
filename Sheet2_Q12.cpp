// a program to find the student with the highest marks from an array of structures:
#include <iostream>
using namespace std;
struct Student {
    char name[50];
    int marks;
};
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Student s[n];
for (int i = 0; i < n; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> s[i].name;
        cout << "Enter marks of " << s[i].name << ": ";
        cin >> s[i].marks;
    }
    int highestIndex = 0;
 for (int i = 1; i < n; i++) {
        if (s[i].marks > s[highestIndex].marks) {
            highestIndex = i;
        }
    }
    cout << "\nStudent with highest marks:\n";
    cout << "Name: " << s[highestIndex].name << endl;
    cout << "Marks: " << s[highestIndex].marks << endl;
    return 0;
}
