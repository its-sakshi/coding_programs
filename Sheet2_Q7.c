// program to concatenate two strings manually, without using library function
#include<iostream>
using namespace std;
int main(){
  char str1[100], str2[100];
    int i = 0, j = 0;
    cout<<"enter first string:"<<endl;
    cin>>str1;
    cout<<"enter second string:"<<endl;
    cin>>str2;
  while (str1[i] != '\0') {
        i++;
    }
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';

    cout << "Concatenated string: " << str1 << endl;
  return 0;
}
