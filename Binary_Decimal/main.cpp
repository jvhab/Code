#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    int res{};
    string s;
    cin >> s;
    int temp{};
    for (size_t i = 0; i < s.size(); i++) {
        if (temp < s[i] - '0') {
            res += abs(temp - (s[i] - '0'));
            temp = s[i] - '0';
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