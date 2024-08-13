#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main() { 
  int t;
  cin>>t;
  while(t--){
    int x,y,n;
    cin>>x>>y>>n;
    int k=n;
    while(true){
      if(k%x==y){
        cout<<k;
        break;
      }
      k--;
    }
  }
}
