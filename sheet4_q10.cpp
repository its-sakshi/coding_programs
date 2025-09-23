#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
node *head = nullptr;
void display(){
    node *p = head;
    while(p!=nullptr){
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}
void insertatBeg(int value){
    node * newNode = new node();
    newNode -> data = value;
    newNode -> next = head;
    head = newNode;
}
int length(){
    if(head == nullptr){
        return 0;
    }
    int count =0;
    node * temp = head;
    while(temp != nullptr){
        count++;
        temp = temp -> next;
    }
    return count;
} 
int main(){
    insertatBeg(20);
    insertatBeg(40);
    insertatBeg(60);
    insertatBeg(70);
    cout<<" linked list :"<<endl;
    display();
    int len = length();
    cout<<"length of linked list is : "<< len<< endl;
}
