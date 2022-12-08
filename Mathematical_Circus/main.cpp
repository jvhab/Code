#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    if (k % 4 == 0) {
        cout << "NO" << "\n";
        return;
    }
    if (k % 4 == 1 || k % 4 == 3) {
        cout << "YES" << "\n";
        for (size_t i = 1; i <= n; ++i) {
            if (i % 2 == 1) {
                cout << i << " " << i + 1 << "\n";
            }
        }
    }
    if (k % 4 == 2) {
        cout << "YES" << "\n";
        for (size_t i = 1; i <= n; ++i) {
            if (i % 2 == 1 && (i + 1) % 4 == 0) {
                cout << i << " " << i + 1 << "\n";
            }
            else if (i % 2 == 1 && (i + 1) % 4 != 0) {
                cout << i + 1 << " " << i << "\n";
            }
        }
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