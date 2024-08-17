#include <iostream>
using namespace std;

int main() { 
  int n;
  cin>>n;
  while(n--){
    // health of character, damage of character
    int hc,dc;
    // health of monster, damage of monster
    int hm,dm;
    // k -> coins
    int k,weaponUp,healthUp;

    cin>>hc>>dc;
    cin>>hm>>dm;
    cin>>k>>weaponUp>>healthUp;

  
    for(int i=0;i<k;i++){
      if((hc+healthUp)/dm > hm/(dc+weaponUp)){
        hc+=healthUp;
      }else{
        dc+=weaponUp;
      }
    }

    //hits character can survive
    int hitsChar = hc/dm;
    // hits monster can survive
    int hitsMob = hm/dc;
      
    if(hitsChar>=hitsMob){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
  }
  
}
