#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    string s;
    cin >> s;

    bool ok = (s.back() == 'B');

    int sum = 0;
    for (auto it : s) {
        if (it == 'A') sum++;
        else sum--;
        if (sum < 0) ok = false;
    }

    if (ok) cout << "YES" << endl;
    else cout << "NO" << endl;
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