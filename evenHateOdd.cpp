#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    if (n % 2 != 0) {
      cout << -1 << endl;
      continue;
    }

    int odd = 0;
    int even = 0;

    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if (x % 2 == 0) {
        even++;
      } else {
        odd++;
      }
    }
    cout << abs(odd - even) / 2;
    
  }
}
