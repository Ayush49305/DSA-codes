// #include<bits/stdc++.h>
// using namespace std;

// int majorityElement(vector<int> &arr){
//     for(int i=0;i<arr.size();i++){
//         int cnt=0;
//         for(int j=0;j<arr.size();j++){
//             if(arr[j]==arr[i]){
//                 cnt++;
//             }
//         }

//         if( cnt>arr.size()/2){
//         return arr[i];
//      }
        
//     }
    
//     return -1;

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

//   int result=majorityElement(arr);
//   if(result!=-1)
//   cout<<"Majority element is: "<< result << endl;

//   else
//   cout<<"No majority element found"<<endl;
//     return 0;
// }

// Better solution

#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &arr){
  map<int,int>mpp;

  for(int i=0;i<arr.size();i++){
    mpp[arr[i]]++;
  }
  for(auto it:mpp){
    if(it.second>(arr.size()/2)){
      return it.first;
    }
  }
  return -1;
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

  int result=majorityElement(arr);
  if(result!=-1)
  cout<<"Majority element is: "<< result << endl;

  else
  cout<<"No majority element found"<<endl;
    return 0;
}