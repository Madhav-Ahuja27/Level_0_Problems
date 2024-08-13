#include <iostream>
using namespace std;

int main() {
  int k;
  cin>>k;
  int hour=21,min=00;
  if(k<60){
    min+=k;
    cout<<hour<<":"<<min;
  }else{
    min=k%60;
    hour+=k/60;
    if(min>9){
      cout<<hour<<":"<<min;
    }else{
      cout<<hour<<":0"<<min;
    }
    hour+=k/60;
  }
  
  
}
