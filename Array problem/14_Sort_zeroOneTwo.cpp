#include<bits/stdc++.h>
using namespace std;
  void sortZeroOneTwo(vector<int> &arr){

    int cnt0=0,cnt1=0,cnt2=0;
    for(int i=0;i<arr.size();i++){
      if(arr[i]==0)cnt0++;
       else if(arr[i]==1)cnt1++;
       else cnt2++;
    }
    int i = 0;

    while(cnt0--) arr[i++] = 0;
    while(cnt1--) arr[i++] = 1;
    while(cnt2--) arr[i++] = 2;
  }

int main() {
  int n;
  cout<<"enter number of element:";
  cin>>n;
  vector<int> arr(n);

  cout<<"Enter "<<n<<"Element:";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  sortZeroOneTwo(arr);
  cout<<"sorted array:";
  for(int x:arr)
  cout<<x<<" ";


    return 0;
}