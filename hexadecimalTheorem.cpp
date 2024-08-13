#include <iostream>
#include <vector>

using namespace std;
int main() { 
  int f0=0;
  int f1=1;
  int n;
  cin>>n;
  int x=f0+f1;
  vector<int> ans;
  ans.push_back(f0);
  ans.push_back(f1);
  while(x<n){
    ans.push_back(x);
    f0=f1;
    f1=x;
    x=f1+f0;
  }
  cout<<ans[ans.size()-4]<<" "<<ans[ans.size()-3];
  cout<<" "<<ans[ans.size()-1];
}
