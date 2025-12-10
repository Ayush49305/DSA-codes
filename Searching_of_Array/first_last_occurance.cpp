#include<bits/stdc++.h>
using namespace std;

pair<int,int> searchRange(vector<int> &arr,int target){
  int n=arr.size();
  int first=-1,last=-1;
  for(int i=0;i<n;i++){
    if(arr[i]==target){
      if(first==-1){
        first=i;
      }
      last=i;
    }
  }
  return {first,last};
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
    
    pair<int,int> ans = searchRange(arr, target);

    cout << "Element found at indices: " << ans.first << " and " << ans.second; 
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// int searchRange(vector<int> &arr,int target){
//   int n=arr.size();
//   int low=0,high=n-1;
//   while(low<=high){
//     int mid=(low+high/2);
//     if(arr[mid])
//   }
// }

// int main() {
//   int n,target;

//     cout<<"Enter the size of array:";
//     cin>>n;
//     vector<int> arr (n);

//     cout<<"Enter sorted array:";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     cout<<"Enter the element to search:";
//     cin>>target;
    

//     cout<<"Element found at index:"<<searchInsert(arr,target);

//     return 0;
// }