#include<bits/stdc++.h>
using namespace std;

void left_rotate_by_D_place(int arr[],int n,int d){
  d=d%n;
  int temp[100];
  for(int i=0;i<d;i++){
    temp[i]=arr[i];
      }
    for(int i=d;i<n;i++)
     arr[i-d]=arr[i];

     for(int i=0;i<n;i++)
     arr[n-d+i]=temp[i];
  }

int main() {
  int n,d;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout<<"Enter the no of place:";
    cin>>d;

    left_rotate_by_D_place(arr,n,d);
    cout<<"Array after left rotate by one:";
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    return 0;
}