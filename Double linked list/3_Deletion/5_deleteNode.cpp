#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* back;

    Node(int val) {
        data = val;
        next = nullptr;
        back = nullptr;
    }
};

Node* convertArr2DLL(vector<int>& arr) {
    if (arr.size() == 0) return nullptr;

    Node* head = new Node(arr[0]);
    Node* prev = head;

    for (int i = 1; i < arr.size(); ++i) {
        Node* temp = new Node(arr[i]);
        prev->next = temp;
        temp->back = prev;   // IMPORTANT
        prev = temp;
    }

    return head;
}

void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
void deleteNode(Node* temp){
    Node* prev=temp->back;
    Node* front=temp->next;
    
    if(front==NULL){
        prev->next=nullptr;
        temp->back=nullptr;
        delete temp;
        return;
    }
    prev->next=front;
    front->back=prev;

    temp->next=temp->back=nullptr;
    delete temp;
}

int main() {

    vector<int> arr = {12, 6, 4, 9};
    Node* head = convertArr2DLL(arr);
    deleteNode(head->next->next);
    print(head);   
    return 0;
}