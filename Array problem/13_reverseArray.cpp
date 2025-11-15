#include<bits/stdc++.h>
using namespace std;

int twoSum(vector<int> &arr,int n){
  int sum=0;
  for(int i=0;i<n;i++){
    
  }

}


int main() {
  int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result=max_ones(arr,n);
    cout<<"Number of ones are:"<<result<<endl;
    return 0;
}