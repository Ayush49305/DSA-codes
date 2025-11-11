#include<bits/stdc++.h>
using namespace std;

void Left_Rotate(int arr[],int n){
  int temp=arr[0];
  for(int i=0;i<n-1;i++){
    arr[i]=arr[i+1];
  }
  arr[n-1]=temp;
}


int main() {
  int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Left_Rotate(arr,n);
    cout<<"Array after left rotate by one:";
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }

    return 0;
}