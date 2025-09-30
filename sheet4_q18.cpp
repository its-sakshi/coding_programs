#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

void insertAtBeginning(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (!head) {
        head = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertAtEnd(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next)
        temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}

void insertAtPosition(Node*& head, int val, int pos) {
    if (pos <= 1) {
        insertAtBeginning(head, val);
        return;
    }

    Node* newNode = new Node(val);
    Node* temp = head;
    int count = 1;

    while (temp && count < pos - 1) {
        temp = temp->next;
        count++;
    }

    if (!temp) {
        insertAtEnd(head, val);
        return;
    }

    newNode->next = temp->next;
    newNode->prev = temp;
    if (temp->next) temp->next->prev = newNode;
    temp->next = newNode;
}

void printList(Node* head) {
    Node* temp = head;
    cout << "Forward: ";
    while (temp) {
        cout << temp->data << " ";
        if (!temp->next) break;
        temp = temp->next;
    }
    cout << endl;

    cout << "Backward: ";
    while (temp) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    insertAtBeginning(head, 10);
    insertAtBeginning(head, 5);
    insertAtEnd(head, 20);
    insertAtEnd(head, 25);
    insertAtPosition(head, 15, 3);
    insertAtPosition(head, 30, 10);

    printList(head);

    return 0;
}
