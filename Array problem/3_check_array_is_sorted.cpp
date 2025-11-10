#include<bits/stdc++.h>
using namespace std;

bool is_sorted(int arr[],int n){
  for(int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
    return false;
    }
  }
  return true;
  
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

    if(is_sorted(arr,n))
    cout<<"Array is sorted";
    else
    cout<<"Not sorted";

    return 0;
}