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
    cout<<endl;
}

void deletefromend(node* &head){
    node * temp =head;
    while(temp -> next -> next!= nullptr){
       temp = temp ->  next;
    }
    temp -> next = nullptr;
    cout<<"node deleted successfully from the end "<<endl;
}
void insertatposition(node* &head, int value, int pos){
    node * newNode = new node();
    newNode -> data = value;
    newNode -> next = nullptr;
    if(pos == 1){
        newNode -> next = head;
        head = newNode;
        return;
    }
    node *temp =head;
    for(int i=1; i<pos -1 && temp != nullptr ; i++){
                temp = temp -> next;
    }
    if(temp == nullptr){
        cout<<" position is out of range "<<endl;
        return;
    }
    newNode -> next = temp -> next;
    temp -> next = newNode;
}
int main(){
    node * head = nullptr;
    insertatposition(head, 30,1);
    insertatposition(head, 20,2);
    insertatposition(head, 10,3);
    insertatposition(head, 40,1);

    display(head);
    deletefromend(head);
        deletefromend(head);

        display(head);

    return 0;
}
