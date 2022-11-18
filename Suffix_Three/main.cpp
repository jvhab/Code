#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    string s;
    cin >> s;
    if (s[s.size() - 1] == 'o') {
        cout << "FILIPINO" << "\n";
    }
    else if (s[s.size() - 1] == 'u') {
        cout << "JAPANESE" << "\n";
    }
    else {
        cout << "KOREAN" << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}