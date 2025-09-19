#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
void display(node* &head){
    node *p = head;
    while(p!=nullptr){
        cout<<p->data<<" ";
        p = p->next;
    }
}
void insertatEnd(node* &head, int value){
    node * newNode = new node();
    newNode -> data = value;
    newNode -> next = nullptr;
    if(head == nullptr){
        head = newNode;
        return;
    }
    node *temp =head;
    while(temp -> next != nullptr){
        temp = temp -> next;
    }
    temp -> next = newNode;
}
int main(){
    node * head = nullptr;
    insertatEnd(head, 30);
    insertatEnd(head, 20);
    insertatEnd(head, 10);
    insertatEnd(head, 40);

    display(head);
}
