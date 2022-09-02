#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

void solve() {
    int x, y;
    cin >> x >> y;
    if (x == 0 && y == 0) {
        cout << 0 << "\n";
        return;
    }
    int c = x * x + y * y;
    for (int i = 0; i <= c; ++i) {
        if (i * i == c) {
            cout << 1 << "\n";
            return;
        }
    }
    cout << 2 << "\n";
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