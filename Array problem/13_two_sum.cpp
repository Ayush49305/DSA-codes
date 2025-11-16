#include<bits/stdc++.h>
using namespace std;

void twoSum(vector<int> &arr,int n,int target){
  bool found=false;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i]+arr[j]==target){
      cout<<"pair found at index " << i <<" and " << j <<endl;
      found=true;
      }
    }
  }
  if(!found)
  cout<<"pair not found"<<endl;

}


int main() {
  int n,target;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<"Enter target sum:";
    cin>>target;

    twoSum(arr,n,target);
  
    return 0;
}