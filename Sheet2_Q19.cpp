#include <iostream>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    string name;
    int rollNumber;
    Date dob;
};

int main() {
    Student s;

    cout << "Enter student name: ";
    getline(cin, s.name);

    cout << "Enter roll number: ";
    cin >> s.rollNumber;

    cout << "Enter date of birth (day month year): ";
    cin >> s.dob.day >> s.dob.month >> s.dob.year;

    cout << "\nStudent Details:\n";
    cout << "Name: " << s.name << endl;
    cout << "Roll Number: " << s.rollNumber << endl;
    cout << "Date of Birth: " << s.dob.day << "/" << s.dob.month << "/" << s.dob.year << endl;

    return 0;
}
