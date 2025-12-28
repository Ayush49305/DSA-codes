#include<bits/stdc++.h>
using namespace std;

void mergeSortedArray(vector<int> &arr1,int m,vector<int> &arr2,int n){
    // m=arr1.size(),n=arr2.size();
    int i=m-1,j=n-1,k=m+n-1;   
    while(i>=0 && j>=0){
        if(arr1[i]<=arr2[j]){
            arr1[k]=arr2[j];
            j--;
        } else {
            arr1[k]=arr1[i];
            i--;
        }
        k--;
    }
    while(j>=0){
        arr1[k]=arr2[j];
        j--;
        k--;
    }     
}

int main() {
    int m;
    cout<<"enter number of element in Arr1:";
    cin>>m;
    vector<int> arr1(m);
  
    cout<<"Enter "<<m<<" Element:";
    for(int i=0;i<m;i++){
      cin>>arr1[i];
    }

    int n;
    cout<<"enter number of element in Arr2:";
    cin>>n;
    vector<int> arr2(n);
  
    cout<<"Enter "<<n<<" Element:";
    for(int j=0;j<n;j++){
      cin>>arr2[j];
    }
    arr1.resize(m+n);
   mergeSortedArray(arr1,m,arr2,n);
    cout << "Merged array:\n";
    for(int k = 0; k<m+n ; k++){
        cout << arr1[k] << " ";
    }
    return 0;
}
