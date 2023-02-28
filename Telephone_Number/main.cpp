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
    for (size_t i = 0; i < n; ++i) {
        if (s[i] == '8') {
            if (n - (i + 1) >= 10) {
                cout << "YES" << "\n";
                return;
            }
            else {
                cout << "NO" << "\n";
                return;
            }
        }
    }
    cout << "NO" << "\n";
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