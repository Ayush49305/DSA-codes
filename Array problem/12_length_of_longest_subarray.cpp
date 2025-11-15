// Given an array nums of size n and an integer k, find the length of the longest sub-array that sums to k. If no such sub-array exists, return 0.

#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int> &arr,int k){
  int len=0;
  for(int i=0;i<arr.size();i++){
    int sum=0;
    for(int j=i;j<arr.size();j++){
      
      sum+=arr[k]; 
      if(sum==k)
      len=max(len,j-i+1);
    }
  }
  return len;
}

int main() {
  int n,k;

  cout<<"Enter the number of element:";
  cin>>n;

  vector<int> arr(n);

  cout<<"Enter" << n << " Element:";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  cout<<"Enter the sum you want using longest subarray:";
  cin>>k;

  int result=longestSubarray(arr,k);
  cout<<"longest subarray which sum equal to"<< k <<"is:"<<result<<endl;
    return 0;
}