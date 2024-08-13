#include <iostream>
using namespace std;
int main() {
  int k, s;
  cin >> k;
  cin >> s;
  int ans = 0;
  // trying brute force
  for (int i = 0; i <= k; i++) {
    for (int j = 0; j <= k; j++) {
      for (int third = 0; third <= k; third++) {
        if (i + j + third == s) {
          ans++;
        }
      }
    }
  }
  cout << ans;
}
