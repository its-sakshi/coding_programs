//a program to check if a string is palindrome or not

#include<iostream>
using namespace std;
int main(){
    char str[100];
    int i = 0, j = 0;
    bool isPalindrome = true;

    cout << "Enter a string: ";
    cin >> str;
  while (str[j] != '\0') {
        j++;
    }
    j--;
   while (i < j) {
        if (str[i] != str[j]) {
            isPalindrome = false;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;
  return 0;
}
