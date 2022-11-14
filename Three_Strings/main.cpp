#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    string a, b, c;
    cin >> a >> b >> c;
    for (size_t i = 0; i < a.size(); ++i) {
        if (c[i] != a[i] && c[i] != b[i]) {
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