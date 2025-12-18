// #include <bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;
//     Node* back;

//     public:
//     Node(int data1,Node* next1,Node* back1){
//         data = data1;
//         next =next1;
//         back = back1;
//     }

//     public:
//     Node(int data1){
//       data=data1;
//       next=nullptr;
//       back=nullptr;
//     }
// };

// Node* convertArr2DLL(vector<int> &arr){
//     Node* head=new Node(arr[0]);
//     Node* prev=head;
//     for(int i=1;i<arr.size();i++){
//         Node* temp=new Node(arr[i],nullptr,prev);
//         prev->next=temp;
//         prev=temp;
//     }
//     return head;
// }
// void print(Node* head){
//     while(head!=NULL){
//         cout<<head->data<<" ";
//         head=head->next;
//     }
// }

// int main() {
//     cout<<"\nProgram started\n";
//     vector<int> arr={12,6,4,9};
//     Node* head= convertArr2DLL(arr);
//     print(head);
//     cout<<"\nProgram ended\n";
    
    
//     return 0;
// }

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

int main() {

    vector<int> arr = {12, 6, 4, 9};
    Node* head = convertArr2DLL(arr);

    print(head);

    
    return 0;
}