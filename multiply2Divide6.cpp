#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int moves(int x){
  int ans = 0;
  while(x>1){
    if(x%6==0){
      x/=6;
      ans++;
    }else{
      x*=2;
      ans++;
    }
    
  }
  if(x==1){
    return ans;
  }
  return -1;
}
int main() {
  // int n;
  // cin>>n;
  // while(n--){
    int x;
    cin>>x;
    cout<<moves(x);
  // }
}
