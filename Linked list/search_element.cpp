#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to search an element in the linked list
bool search(Node* head, int key) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == key)
            return true;  // found
        temp = temp->next;
    }
    return false; // not found
}

int main() {
    // Create nodes
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // Assign data
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    if (search(head, key))
        cout << key << " found in the linked list.\n";
    else
        cout << key << " not found in the linked list.\n";

    return 0;
}
