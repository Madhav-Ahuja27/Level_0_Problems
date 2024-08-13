#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <map>
#include <vector>
int main() {
  map<int, int> m;

  for (int i = 0; i < 5; i++) {
    int x;
    cin >> x;
    if (m[x] > 0) {
      m[x]++;
    } else {
      m[x] = 1;
    }
  }
  bool f3 = false;
  bool f2 = false;
  for (auto i : m) {
    if (i.second == 3) {
      f3 = true;
    }
    if (i.second == 2) {
      f2 = true;
    }
  }
  if (f2 && f3) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
