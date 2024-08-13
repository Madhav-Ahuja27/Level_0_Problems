#include <iostream>
using namespace std;
#include <string>
#include <bits/stdc++.h>
int main() {
  int ans = 1;
  for (int i = 0; i < 4; i++) {
    int x;
    cin >> x;
    ans *= x;
  }
  string str = to_string(ans);
  cout << str[str.length() - 2] << str[str.length() - 1];
}
