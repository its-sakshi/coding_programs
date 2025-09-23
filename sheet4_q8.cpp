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
void reverselist(){
    if(head == nullptr || head -> next == nullptr){
        return;
    }
    node *prev = nullptr;
    node *curr = head;
    node *next;
    while(curr != nullptr){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
} 
int main(){
    insertatBeg(20);
    insertatBeg(40);
    insertatBeg(60);
    insertatBeg(70);
    cout<<" linked list before reversing :"<<endl;
    display();
    reverselist();
   cout<<"linked list after reversal :"<<endl;
   display();
}
