#include<bits/stdc++.h>
using namespace std;

int maximum_Profit(vector<int> &arr){
    int mini=arr[0];
    int maxProfit=0;

    for(int i=1;i<arr.size();i++){
        int cost=arr[i]-mini;
        maxProfit=max(maxProfit,cost);
        mini=min(mini,arr[i]);
    }
    return maxProfit;

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

  int result=maximum_Profit(arr);
  cout<<"Maximum profit will be:"<<result<<endl;
    return 0;
}
