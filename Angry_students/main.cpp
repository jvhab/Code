#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    int k;
    cin >> k;
    string s;
    cin >> s;
    int res{};
    int temp{};
    bool flag = false;
    for (size_t i = 0; i < k; ++i) {
        if (s[i] == 'A') {
            flag = true;
            temp = 0;
        }
        else if (s[i] == 'P' && flag) {
            temp++;
        }
        res = max(res, temp);
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