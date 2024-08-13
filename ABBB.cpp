#include <iostream>
using namespace std;
#include <string>
int main() {
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;){
      if(s.substr(i,2)=="AB" || s.substr(i,2)=="BB"){
        s.erase(i,2);
        if(i>0){
          i--;
        }
    }
      else{
          i++;
        }
      }
     cout<<s.length();
    }
   
  
}
