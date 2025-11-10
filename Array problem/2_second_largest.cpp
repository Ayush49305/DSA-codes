#include<bits/stdc++.h>
using namespace std;

int second_largest(int arr[],int n){
  if(n<2) return INT_MIN;
  int largest=arr[0];
  int second_large=INT_MIN;
  for(int i=1;i<n;i++){
    if(arr[i]>largest){
      second_large=largest;
      largest=arr[i];
      
    } 
    else if(arr[i]<largest && arr[i]>second_large){
        second_large=arr[i];
    
      }
    }
    return second_large;
  
}

int main() {

  int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    int result= second_largest(arr, n);

    if(result == INT_MIN)
        cout << "No second largest element exists (all elements are equal)." << endl;
    else
    cout << "Second Largest element = " << result << endl;

    return 0;
}

