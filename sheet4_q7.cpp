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
void deletenode(int value){
    if(head== nullptr){
        cout<<"list is empty"<<endl;
        return;
    }
    if(head-> data == value){
        head = head -> next;
        cout<<"node deleted succesfully "<<endl;
        return;
    }
    node *curr = head;
    node *prev = nullptr;
    while(curr != nullptr){
        if(curr -> data == value){
            prev -> next = curr -> next;
            cout<<"node deleted succesfully "<<endl;
            return;
        }
        prev = curr;
        curr = curr ->next;
    }
    if(curr == nullptr){
        cout<<"node not found "<<endl;
    }
}
int main(){
    insertatBeg(20);
    insertatBeg(40);
    insertatBeg(60);
    insertatBeg(70);
    display();
    deletenode(70);
    display();

    deletenode(20);
    display();
}
