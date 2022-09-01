#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<string> v1(2);
    for (auto& i : v1) {
        cin >> i;
    }
    for (size_t i = 0; i < n; ++i) {
        if (v1[0][i] == 'R' && v1[1][i] != 'R' || v1[1][i] == 'R' && v1[0][i] != 'R') {
            cout << "NO" << "\n";
            return;
        }
    }
    cout << "YES" << "\n";
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