#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int> &arr, int target)  {
        int n=arr.size();
       int low=0,high=n-1;
       int ans=n;

       while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=target){
          ans=mid;
          high =mid-1;
        }
        else {
         low=mid+1;
        }

       }
        return ans;
    }

int main() {
  int n,target;

    cout<<"Enter the size of array:";
    cin>>n;
    vector<int> arr (n);

    cout<<"Enter sorted array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the element to search:";
    cin>>target;
    

    cout<<"Element found at index:"<<searchInsert(arr,target);

    return 0;
}