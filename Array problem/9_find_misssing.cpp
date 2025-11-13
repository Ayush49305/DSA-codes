#include<bits/stdc++.h>
using namespace std;
  int findMissing(vector<int> &arr,int n){
    for(int i=1;i<=n;i++){
      bool flag=false;
      for(int j=0;j<n-1;j++){
        if(arr[j]==i){
          flag=true;
          break;
        }
      }
    
    if(!flag)
      return i;
    }
    return -1;
  }

int main() {
  int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n-1);
    cout << "Enter " << n - 1<< " elements: ";
    for (int i = 0; i < n-1; i++) {
        cin >> arr[i];
    }

    int result=findMissing(arr,n);
    cout<<"Missing element is:"<<result<<endl;

    
    return 0;
}