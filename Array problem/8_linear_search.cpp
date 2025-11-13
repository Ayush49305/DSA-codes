#include<bits/stdc++.h>
using namespace std;
  int linearSearch(vector<int> &arr,int a){
    for(int i=0;i<arr.size();i++){
      if(arr[i]==a){
        return i;
      }
    }
    return -1;
  }


int main() {
  int n,a;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout<<"Enter the element you want to search:";
    cin>>a;

    int result=linearSearch(arr,a);
    if(result!=-1)
      cout<<"Element found at index at index:"<<result<<endl;
    else
      cout<<"Element not found";
    
    return 0;
    
}