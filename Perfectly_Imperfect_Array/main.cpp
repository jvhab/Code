#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v1(n);
    for (auto& i : v1) {
        cin >> i;
    }
    bool flag = false;
    for (size_t i = 0; i < n; ++i) {
        if (static_cast<int>(sqrt(v1[i])) * static_cast<int>(sqrt(v1[i])) != v1[i]) {
            flag = true;
        }
    }
    cout << (flag ? "YES" : "NO") << "\n";
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