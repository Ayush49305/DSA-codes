#include<bits/stdc++.h>
using namespace std;

void rearrangeArray(vector<int> &arr){
    vector<int> pos,neg;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]>=0)
        pos.push_back(arr[i]);
        else
        neg.push_back(arr[i]);
    }
      int p = 0, q = 0;
    for(int i = 0; i < n; i += 2){
        arr[i] = pos[p++];
        arr[i+1] = neg[q++];
    }
}

int main() {
    int n;
    cout<<"enter number of element:";
    cin>>n;
    vector<int> arr(n);
  
    cout<<"Enter "<<n<<" Element:";
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
  
    rearrangeArray(arr);
    cout << "Rearranged array:\n";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
  
}
