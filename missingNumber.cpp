#include <iostream>
using namespace std;
#include <map>
int main() { 
  int n;
  cin>>n;
  map<int,int> m;
  for(int i=0;i<n-1;i++){
    int x;
    cin>>x;
    m[x]=1;
  }
  while(n--){
    if(m[n]!=1){
      cout<<n<<endl;
      return 0;
    }
  }
  
}
