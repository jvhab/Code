#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v1(n);
    int zero{};
    for (auto& i : v1) {
        cin >> i;
        if (i == 0) {
            zero++;
        }
    }
    sort(v1.begin(), v1.end());
    if (zero > 0) {
        cout << n - zero << "\n";
    }
    else {
        for (int i = 0; i < n - 1; ++i) {
            if (v1[i] == v1[i + 1]) {
                cout << n << "\n";
                return;
            }
        }
        cout << n + 1 << "\n";
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