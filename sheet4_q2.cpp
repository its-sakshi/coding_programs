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
void insertatBeg(node* &head, int value){
    node * newNode = new node();
    newNode -> data = value;
    newNode -> next = head;
    head = newNode;
}
int main(){
    node * head = nullptr;
    insertatBeg(head, 30);
    insertatBeg(head, 20);
    insertatBeg(head, 10);
    insertatBeg(head, 40);

    display(head);
}
