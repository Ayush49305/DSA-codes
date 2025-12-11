// // Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value. If the target is not found in the array, return [-1, -1]

// // #include<bits/stdc++.h>
// // using namespace std;

// // pair<int,int> searchRange(vector<int> &arr,int target){
// //   int n=arr.size();
// //   int first=-1,last=-1;
// //   for(int i=0;i<n;i++){
// //     if(arr[i]==target){
// //       if(first==-1){
// //         first=i;
// //       }
// //       last=i;
// //     }
// //   }
// //   return {first,last};
// // }

// // int main() {
// //   int n,target;

// //     cout<<"Enter the size of array:";
// //     cin>>n;
// //     vector<int> arr (n);

// //     cout<<"Enter sorted array:";
// //     for(int i=0;i<n;i++){
// //         cin>>arr[i];
// //     }

// //     cout<<"Enter the element to search:";
// //     cin>>target;
    
// //     pair<int,int> ans = searchRange(arr, target);

// //     cout << "Element found at indices: " << ans.first << " and " << ans.second; 
// //     return 0;
// // }


// //better solution

#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &arr, int n, int target){
    int ans = n;
    int low = 0, high = n - 1;

    while(low <= high){
        int mid = low + (high - low) / 2;  // FIXED

        if(arr[mid] >= target){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

int upperBound(vector<int> &arr, int n, int target){
    int ans = n;
    int low = 0, high = n - 1;

    while(low <= high){
        int mid = low + (high - low) / 2;  // FIXED

        if(arr[mid] > target){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

pair<int,int> searchRange(vector<int> &arr, int n, int k){
    int lb = lowerBound(arr, n, k);

    if(lb == n || arr[lb] != k) return {-1, -1};

    return {lb, upperBound(arr, n, k) - 1};
}

int main(){
    int n, target;

    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter sorted array:\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> target;

    auto res = searchRange(arr, n, target);

    cout << "Element found at indices: "
         << res.first << " " << res.second << endl;

    return 0;
}
