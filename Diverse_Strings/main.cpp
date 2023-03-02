#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    for (size_t i = 0; i < s.size() - 1; ++i) {
        if (s[i] == s[i + 1] || s[i + 1] - s[i] > 1) {
            cout << "NO" << "\n";
            return;
        }
    }
    cout << "YES" << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--) {
        solve();
    }
    return 0;
}