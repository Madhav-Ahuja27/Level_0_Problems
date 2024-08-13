#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main() { 
    string str;
    cin >> str;
    int n = str.length();
    map<char, int> m;

    for(int i = 0; i < n; i++) {
        m[str[i]]++;
    }

    int odd = 0;
    char mid = '\0';
    string halfStr = "";

    for(auto s : m) {
        if(s.second % 2 != 0) {
            odd++;
            mid = s.first;
        }
        halfStr += string(s.second / 2, s.first);
    }

    if(odd > 1) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    string palindrome = halfStr;
    if(mid != '\0') {
        palindrome += mid;
    }
    reverse(halfStr.begin(), halfStr.end());
    palindrome += halfStr;

    cout << palindrome << endl;
}
