//It is only used in Sorted array.

#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr,int key){
    int n = arr.size();
    int low=0,high=n-1;

    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key){
            return mid;
        } else if(arr[mid]<key){
            low=mid+1;
        } else{
            high=mid-1;
        }
    }
    return -1;
}

int main() {

    int n,key;

    cout<<"Enter the size of array:";
    cin>>n;
    vector<int> arr (n);

    cout<<"Enter sorted array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the element to search:";
    cin>>key;
    

    cout<<"Element found at index:"<<binarySearch(arr,key);
  
    return 0;
}