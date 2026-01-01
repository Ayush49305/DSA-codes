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

Node* reverseDLL(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }

    Node* prev=NULL;
    Node* current=head;
    while(current!=NULL){
        prev=current->back;

        current->back=current->next;
        current->next=prev;

        current=current->back;
    }
    return prev->back;
}

void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {

    vector<int> arr = {12, 6, 4, 9};
    Node* head = convertArr2DLL(arr);
    head=reverseDLL(head);

    print(head);

    
    return 0;
}