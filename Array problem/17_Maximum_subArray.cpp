#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &arr){
  int maximum=INT_MIN;
  int sum=0;

  int start=0,end=0,tempStart=0;
  for(int i=0;i<arr.size();i++){
    sum+=arr[i];

    if(sum>maximum){
      maximum=sum;
      start=tempStart;
      end=i;
    }

    if(sum<0){
      sum=0;
      tempStart=i+1;
    }
  }
  cout << "Maximum Subarray is: ";
    for(int i = start; i <= end; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
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

  maxSubArray(arr);
  
     return 0;
}