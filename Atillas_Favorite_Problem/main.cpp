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
    int res{};
    char a = 'a';
    for (size_t i = 0; i < n; ++i) {
        int temp = s[i] - 'a';
        res = max(temp, res);
    }
    cout << res + 1 << "\n";
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