#include <iostream>
using namespace std;
#include <string>

bool checkY(int x){
  string str = to_string(x);
  if(str[0]!=str[1] && str[0]!=str[2] && str[0]!=str[3] && str[1]!=str[2] && str[1]!=str[3] && str[2]!=str[3]){
    return true;
  }
  return false;
}
int main() {
  int n;
  cin>>n;
  
  while(true){
    int x = n+1;
    if(checkY(x)){
      cout<<x<<endl;
      return 0;
    }
    n++;
  }
  
}
