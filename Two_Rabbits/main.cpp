#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    long long x, y, a, b;
    cin >> x >> y >> a >> b;
    int res{};
    if ((y - x) % (a + b) == 0) {
        cout << (y - x) / (a + b) << "\n";
    }
    else
        cout << -1 << "\n";
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