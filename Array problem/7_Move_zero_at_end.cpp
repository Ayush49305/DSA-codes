#include<bits/stdc++.h>
using namespace std;

void move_zero_to_end(int arr[],int n){
  int j=0;
  for(int i=0;i<n;i++){
    if(arr[i]!=0){
      arr[j]=arr[i];
      j++;
    }
  }

  for(int i=j;i<n;i++){
    arr[i]=0;
  }
}

int main() {
    int n,d;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    move_zero_to_end(arr,n);
    cout<<"Array after left rotate by one:";
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }

    return 0;
}