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
    string s2 = s;
    sort(s2.begin(), s2.end());
    int res{};
    for (size_t i = 0; i < n; ++i) {
        if (s2[i] != s[i]) {
            res++;
        }
    }
    cout << res << "\n";
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