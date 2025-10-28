//It is only used in Sorted array.

#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){
    int start=0,end=n-1;

    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
        } else if(arr[mid]<key){
            start=mid+1;
        } else{
            end=mid-1;
        }
    }
    return -1;
}

int main() {

    int n,key;

    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];

    cout<<"Enter sorted array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the element to search:";
    cin>>key;
    

    cout<<"Element found at index:"<<binarySearch(arr,n,key);
  
    return 0;
}