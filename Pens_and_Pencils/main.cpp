#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    int a, b, c, d, k;
    cin >> a >> b >> c >> d >> k;
    int res1 = a / c;
    if (res1 * c < a) {
        res1++;
    }
    int res2 = b / d;
    if (res2 * d < b) {
        res2++;
    }
    if (res1 + res2 <= k) {
        cout << res1 << " " << res2 << "\n";
    }
    else {
        cout << -1 << "\n";
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