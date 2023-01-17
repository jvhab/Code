#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<long long> v1(n);
    for (auto& i : v1) {
        cin >> i;
    }
    int res{};
    if (k == 1) {
        cout << (n - 1) / 2 << "\n";
    }
    else if (k >= 2) {
        for (size_t i = 1; i < n - 1; i++) {
            if (v1[i - 1] + v1[i + 1] < v1[i]) {
                res++;
            }
        }
        cout << res << "\n";
    }
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