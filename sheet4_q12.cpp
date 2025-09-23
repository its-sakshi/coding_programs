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
void search(int val){
    if(head == nullptr){
        cout<<" list is empty"<<endl;
        return;
    } 
    node * temp = head;
    while(temp !=  nullptr){
        if(temp ->data == val){
            cout<<val <<" is present in the list "<<endl;
            return;
        }
        temp = temp -> next;
    }
    cout<<val <<"  is not present in the list"<<endl;
}

 
int main(){
    insertatBeg(20);
    insertatBeg(40);
    insertatBeg(60);
    insertatBeg(70);
    cout<<" linked list :"<<endl;
    display();
    
    search(60);
        search(30);

}
