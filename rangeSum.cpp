#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int l, r;
    cin >> l >> r;
    int sum = 0;
    for (int i = l; i <= r; i++) {
      sum += i;
    }
    cout << sum << endl;
  }
}
