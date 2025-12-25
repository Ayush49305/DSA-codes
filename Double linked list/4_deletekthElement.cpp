#include <bits/stdc++.h>
// #ifdef _WIN32
// #include <windows.h>
//#endif
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

    for (int i = 1; i < arr.size(); i++) {
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

Node* deleteHead(Node* head){
    if(head==NULL || head->next == NULL){
        return NULL;
    }
    Node* prev =head;
    head=head->next;

    head->back=nullptr;
    prev->next=nullptr;

    delete prev;
    return head;
}


Node* deleteTail(Node* head){
    if(head==NULL || head->next == NULL){
        return NULL;
    }
    Node* tail =head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node* newTail =tail->back;
    newTail->next=nullptr;
    tail->back=nullptr;
    delete tail;
    return head;
}

Node* removeKthElement(Node* head,int k){
    if(head==NULL){
        return NULL;
    }
    int cnt=0;
    Node* kNode=head;
    while(kNode !=NULL){
        cnt++;
        if(cnt==k) break;
        kNode=kNode->next;
    }
    Node* prev=kNode->back;
    Node* front=kNode->next;

    if(prev==NULL && front==NULL){
        return NULL;
    }
    else if(prev==NULL){
        return deleteHead(head);
    }

    else if(prev==NULL){
        return deleteTail(head);
    }
    prev->next=front;
    front->back=prev;

    kNode->next=nullptr;
    kNode->back=nullptr;
    delete kNode;
    return head;
}
int main() {

    vector<int> arr = {12, 6, 4, 9};
    Node* head = convertArr2DLL(arr);
    
    head=removeKthElement(head,3);
    print(head);

    
    return 0;
}