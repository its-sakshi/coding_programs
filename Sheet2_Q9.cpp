// program to count vowels, consonants, digits and special character in string
#include <iostream>
using namespace std;

int main() {
    char str[200];
    int vowels = 0, consonants = 0, digits = 0, special = 0;
    
    cout << "Enter a string: ";
    cin.getline(str, 200);
 for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
 if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            char lower = tolower(ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                vowels++;
            else
                consonants++;
        }
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
else if (ch != ' ') { 
            special++;
        }
    }
cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special characters: " << special << endl;

    return 0;
}
