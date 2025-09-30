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

bool detectAndRemoveLoop(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            Node* ptr1 = head;
            Node* ptr2 = slow;

            if (ptr1 == ptr2) {
                while (ptr2->next != ptr1)
                    ptr2 = ptr2->next;
            } else {
                while (ptr1->next != ptr2->next) {
                    ptr1 = ptr1->next;
                    ptr2 = ptr2->next;
                }
            }

            ptr2->next = nullptr;
            return true;
        }
    }
    return false;
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

    head->next->next->next->next->next = head->next->next; // create a loop

    if (detectAndRemoveLoop(head))
        cout << "Loop detected and removed" << endl;
    else
        cout << "No loop found" << endl;

    cout << "Linked List after loop removal: ";
    printList(head);

    return 0;
}
