// //Given an array of nums of n integers. Every integer in the array appears twice except one integer. Find the number that appeared once in the array.

// #include<bits/stdc++.h>
// using namespace std;
//    int singleNumber(vector<int> &arr,int n){
//       for(int i=0;i<n;i++){
//         int num=arr[i];
//         int count=0;
//         for(int j=0;j<n;j++){
//           if(arr[j]==num)
//           count++;
//         }
//         if(count==1)
//       return num;
    
//       }
//       return 0;
      
    
//    }

// int main() {
//   int n;

//     cout << "Enter number of elements: ";
//     cin >> n;

//     vector<int> arr(n);
//     cout << "Enter " << n << " elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int result=singleNumber(arr,n);
//     cout<<"Element which appers only once is:"<<result<<endl;
//     return 0;
// }

//Using XOR 

#include<bits/stdc++.h>
using namespace std;
 int SingleNumber(vector<int> &arr){
  int XOR=0;
  for(int i=0;i<arr.size();i++){
    XOR=XOR^arr[i];

  }
  return XOR;
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

    int result=SingleNumber(arr);
    cout<<"Element which appers only once is:"<<result<<endl;
    return 0;
}