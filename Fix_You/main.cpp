#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> v1(n);
    for (auto& i : v1)
        cin >> i;
    int res{};
    for (size_t i = 0; i < n - 1; ++i) {
        if (v1[i][m - 1] == 'R') {
            res++;
        }
    }
    for (size_t i = 0; i < m - 1; ++i) {
        if (v1[n - 1][i] == 'D') {
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