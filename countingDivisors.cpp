#include <iostream>
using namespace std;

int noDivisors(int n){
  int ans = 1;
  for(int i=1;i<=n/2;i++){
    if(n%i==0){
      ans++;
    }
  }
  return ans;
}


int main() {
  int n;
  cin>>n;
 
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    cout<<noDivisors(x)<<endl;
  }
  

  
}
