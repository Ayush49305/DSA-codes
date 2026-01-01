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

Node* insertBeforeKthElement(Node* head,int k,int val){

    if(k==1){
        Node* newHead=new Node(val);
        newHead->next = head;
        head->back=newHead;
        return newHead;
    }
  
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count=count+1;
        if(count==k)
        break;
        temp=temp->next;
    }
    Node* prev=temp->back;    
    Node* newNode=new Node(val);
  
    prev->next=newNode;
    temp->back=newNode;
    newNode->back=prev;
    newNode->next=temp;
   
    return head;
}

int main() {
   vector<int> arr = {12, 6, 4, 9};
    Node* head = convertArr2DLL(arr);
    head=insertBeforeKthElement(head,1,10);
    print(head);   
    return 0;
}