#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

void insert(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next)
        temp = temp->next;
    temp->next = newNode;
}

void removeDuplicates(Node* head) {
    Node* current = head;
    while (current && current->next) {
        if (current->data == current->next->data) {
            Node* dup = current->next;
            current->next = current->next->next;
            delete dup;
        } else {
            current = current->next;
        }
    }
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
    insert(head, 2);
    insert(head, 3);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);
    insert(head, 5);

    cout << "Original List: ";
    printList(head);

    removeDuplicates(head);

    cout << "After Removing Duplicates: ";
    printList(head);

    return 0;
}
