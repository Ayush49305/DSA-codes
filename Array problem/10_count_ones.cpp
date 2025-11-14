#include<bits/stdc++.h>
using namespace std;
  int max_ones(vector<int> &arr,int n){
    int count=0;
    for(int i=0;i<n;i++){
      if(arr[i]==1){
        count++;
      }
    }
    return count;
  }

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements(only 0 or 1): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result=max_ones(arr,n);
    cout<<"Number of ones are:"<<result<<endl;
    return 0;
}