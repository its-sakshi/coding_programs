//a program to store and display information of 5 students using structures

#include<iostream>
using namespace std;
struct students{
    char name[10];
    int age;
}s1,s2,s3,s4,s5;
int main(){
  cout<<"enter 1st student name and age "<<endl;
  cin>>s1.name>>s1.age;
  cout<<"enter 2nd student name and age "<<endl;
  cin>>s2.name>>s2.age;
  cout<<"enter 3rd student name and age "<<endl;
  cin>>s3.name>>s3.age;
  cout<<"enter 4th student name and age "<<endl;
  cin>>s4.name>>s4.age;
  cout<<"enter 5th student name and age "<<endl;
  cin>>s5.name>>s5.age;
  cout<<"details of all students :" <<endl;
  cout<<s1.name <<"  "<<s1.age<<endl;
  cout<<s2.name <<"  "<<s2.age<<endl;
  cout<<s3.name <<"  "<<s3.age<<endl;
  cout<<s4.name <<"  "<<s4.age<<endl;
  cout<<s5.name <<"  "<<s5.age<<endl;

  return 0;
}
