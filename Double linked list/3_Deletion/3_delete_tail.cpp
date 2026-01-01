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

int main() {

    vector<int> arr = {12, 6, 4, 9};
    Node* head = convertArr2DLL(arr);
    
    head=deleteTail(head);
    print(head);

    
    return 0;
}
// #ifdef _WIN32
// #ifdef __cplusplus
// extern "C"
// #endif
// int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {
//     return main();
// }
// #endif
