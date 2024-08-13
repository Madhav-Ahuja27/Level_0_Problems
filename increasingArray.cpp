#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main() {
  int n;
  cin>>n;
  int ans = 0;
  int* arr = new int[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int i=0;
  int j=1;
  while(j<n){
    if(arr[i]>arr[j]){
      int diff = arr[i]-arr[j];
      arr[j]+=diff;
      ans+=diff;
    }
    i++;
    j++;
  }
  cout<<ans<<endl;
  
} 
