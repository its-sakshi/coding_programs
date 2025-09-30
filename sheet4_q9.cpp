#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
void insert(Node*& head, int val) {
    Node* newNode = new Node();
    newNode -> next = nullptr;
    newNode -> data = val;
    if(head == nullptr){
    head = newNode; 
      return;
    }
 Node* temp = head;
    while (temp->next)
        temp = temp->next;
    temp->next = newNode;
}
Node* reverseRecursive(Node* head) {
  if (head == nullptr || head->next == nullptr)
        return head;
Node* newHead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = nullptr;
    return newHead;
}
void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main() {
    Node* head = nullptr;
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);

    cout << "Original List: ";
    printList(head);
head = reverseRecursive(head);
    cout << "Reversed List: ";
    printList(head);
    return 0;
}
