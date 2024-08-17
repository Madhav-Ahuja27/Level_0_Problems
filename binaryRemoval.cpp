#include <iostream>
using namespace std;
#include <string>
int main(){
  int n;
  cin>>n;
  while(n--){
    string s;
    cin>>s;
    int mid = s.length()/2;
    bool left=true,right=true;
    for(int i=0;i<mid;i++){
      if(s[i]=='1' && s[i+1]=='1'){
        left=false;
      }
    }
    for(int i=mid;i<s.length()-1;i++){
      if(s[i]=='0' && s[i+1]=='0'){
        right=false;
      }
    }
    if(left || right){
       cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
}
