#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insert(Node*& head, int val) {
    Node* newNode = new Node();
    newNode -> data = val;
    newNode -> next = nullptr;
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next)
        temp = temp->next;
    temp->next = newNode;
}

Node* mergeSorted(Node* l1, Node* l2) {
    if (!l1) return l2;
    if (!l2) return l1;

    if (l1->data <= l2->data) {
        l1->next = mergeSorted(l1->next, l2);
        return l1;
    } else {
        l2->next = mergeSorted(l1, l2->next);
        return l2;
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
    Node* list1 = nullptr;
    Node* list2 = nullptr;

    insert(list1, 1);
    insert(list1, 3);
    insert(list1, 5);
    insert(list1, 7);

    insert(list2, 2);
    insert(list2, 4);
    insert(list2, 6);
    insert(list2, 8);

    cout << "List 1: ";
    printList(list1);
    cout << "List 2: ";
    printList(list2);

    Node* merged = mergeSorted(list1, list2);

    cout << "Merged Sorted List: ";
    printList(merged);

    return 0;
}
