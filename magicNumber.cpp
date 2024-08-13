#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main() {
  int n;
  cin >> n;
  // going for what i think is the obvious soln
  // will worry about optimization later
  string str = to_string(n);
  int l = str.length();

  for (int i = 0; i < l;) {
    if (str.substr(i, 3) == "144") {
      i += 3;
    } else if (str.substr(i, 2) == "14") {
      i += 2;
    } else if (str[i] == '1') {
      i += 1;
    } else {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
}
