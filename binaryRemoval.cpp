
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
    for(int i=0;i<mid;i++){
      if(s[i]=='1' && s[i+1]=='1'){
        cout<<"NO"<<endl;
        return 0;
      }
    }
    for(int i=mid;i<s.length()-1;i++){
      if(s[i]=='0' && s[i+1]=='0'){
        cout<<"NO"<<endl;
        return 0;
      }
    }
    cout<<"YES"<<endl;
  }
}
