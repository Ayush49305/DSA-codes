//Brute force solution

// #include<bits/stdc++.h>
// using namespace std;

// int maxSubArraySum(vector<int> &arr){
//   int maximum=INT_MIN;
//   for(int i=0;i<arr.size();i++){
//     for(int j=i;j<arr.size();j++){
//       int sum=0;
//       for(int k=i;k<j;k++){
//         sum+=arr[k];
//         maximum=max(sum,maximum);
//       }
//     }
//   }
//   return maximum;
// }

// int main() {
//   int n;
//   cout<<"enter number of element:";
//   cin>>n;
//   vector<int> arr(n);

//   cout<<"Enter "<<n<<" Element:";
//   for(int i=0;i<n;i++){
//     cin>>arr[i];
//   }

//   int result=maxSubArraySum(arr);
//   cout<<"Sum of maximum subArray is:"<<result<<endl;
  
  
//     return 0;
// }

//Better solution

// #include<bits/stdc++.h>
// using namespace std;

// int maxSubArraySum(vector<int> &arr){
//   int maximum=INT_MIN;
//   for(int i=0;i<arr.size();i++){
//     int sum=0;
//     for(int j=i;j<arr.size();j++){    
//         sum+=arr[j];
//         maximum=max(sum,maximum);
//       }
//     }
  
//   return maximum;
// }

// int main() {
//   int n;
//   cout<<"enter number of element:";
//   cin>>n;
//   vector<int> arr(n);

//   cout<<"Enter "<<n<<" Element:";
//   for(int i=0;i<n;i++){
//     cin>>arr[i];
//   }

//   int result=maxSubArraySum(arr);
//   cout<<"Sum of maximum subArray is:"<<result<<endl;
  
  
//     return 0;
// }

//Optimal solution(Kadane's Algorithm)

#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(vector<int> &arr){
  int maximum=INT_MIN;
  int sum=0;
  for(int i=0;i<arr.size();i++){
    sum+=arr[i];

    if(sum>maximum){
      maximum=sum;
    }

    if(sum<0){
      sum=0;
    }
  }
  return maximum;
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

  int result=maxSubArraySum(arr);
  cout<<"Sum of maximum subArray is:"<<result<<endl;
  
    return 0;
}