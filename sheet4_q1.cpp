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
void insertNode(node* &head, int value){
    node * newNode = new node();
    newNode -> data = value;
    newNode -> next = head;
    head = newNode;
}
int main(){
    node * head = nullptr;
    insertNode(head, 30);
    insertNode(head, 20);
    insertNode(head, 10);
    display(head);
}
