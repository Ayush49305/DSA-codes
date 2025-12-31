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

Node* insertBeforeTail(Node* head,int val){

    if (head == nullptr) {
        return new Node(val);
    }

    if(head->next==NULL){       
        Node* newHead=new Node(val);
        newHead->next = head;
        head->back=newHead;
        return newHead;
    }

    
    Node* tail=head;
    while(tail->next!=nullptr){
        tail=tail->next;
    }
    Node* prev=tail->back;
      
    Node* newNode=new Node(val);

    newNode->next=tail;
    newNode->back=prev;

    prev->next=newNode;
    tail->back=newNode;
    return head;
}

int main() {
   vector<int> arr = {12, 6, 4, 9};
    Node* head = convertArr2DLL(arr);
    head=insertBeforeTail(head,10);
    print(head);   
    return 0;
}