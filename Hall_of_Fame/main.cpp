#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int R{}, L{};
    for (size_t i = 0; i < n; i++) {
        if (s[i] == 'R') {
            R++;
        }
        else {
            L++;
        }
    }
    for (size_t i = 0; i < n - 1; i++) {
        if (s[i] == 'L' && s[i + 1] == 'R') {
            cout << i + 1 << "\n";
            return;
        }
    }
    if (R > 0 && L > 0) {
        cout << 0 << "\n";
    }
    else {
        cout << -1 << "\n";
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