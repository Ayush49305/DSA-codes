#include<iostream>
using namespace std;

int find_largest(int arr[],int n){
  int largest=arr[0];
  for(int i=1;i<n;i++){
    if(arr[i]>largest){
      largest=arr[i];
    }
  }
  return largest;
}

int main(){

  int n;
  cout <<"Enter the number of elemment:";
  cin >> n;

  int arr[n];
  cout<<"Enter the element:";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  //find_largest(arr,n);

  cout<<"largest Element="<<find_largest(arr,n)<<endl;

   
  return 0;
}