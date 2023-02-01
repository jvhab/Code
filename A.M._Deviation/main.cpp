#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    long long a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    if (abs(a1 + a3 - 2 * a2) % 3 == 0)
        cout << 0 << "\n";
    else
        cout << 1 << "\n";
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