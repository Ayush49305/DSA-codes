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

    for (size_t i = 1; i < arr.size(); ++i) {
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

Node* insertBeforeHead(Node* head,int val){
    Node* newHead=new Node(val,head,nullptr);
    head->back=newHead;
    return newHead;
}

int main() {

    vector<int> arr = {12, 6, 4, 9};
    Node* head = convertArr2DLL(arr);
    head=insertBeforeHead(head,10);
    print(head);

    
    return 0;
}