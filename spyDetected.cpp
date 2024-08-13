#include <iostream>
using namespace std;

int returnIdx(int arr[], int n){
  if(arr[0]!=arr[1] && arr[0]!=arr[2]){
    return 0;
  }
  if(arr[n-1]!=arr[n-2] && arr[n-1]!=arr[n-3]){
    return n-1;
  }
  for(int i=1;i<n-1;i++){
    if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1]){
      return i;
    }
  }
  return -1;
}

int main() {
  int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    cout<<returnIdx(arr,n)<<endl;
  }
  
}
