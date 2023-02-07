#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    int n, c0, c1, h;
    cin >> n >> c0 >> c1 >> h;
    string s;
    cin >> s;
    int res{};
    int mins1 = min(c1, c0 + h);
    int mins0 = min(c0, c1 + h);
    for (size_t i = 0; i < n; ++i) {
        if (s[i] == '0') {
            res += mins0;
        }
        else {
            res += mins1;
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