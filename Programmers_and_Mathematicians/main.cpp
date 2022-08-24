#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    long long a, b;
    cin >> a >> b;
    long long teams{};
    if (a == 0 || b == 0) {
        cout << 0 << "\n";
        return;
    }
    long long mins = min(a, b);
    if (mins < (a + b) / 4) {
        cout << mins << "\n";
    }
    else {
        cout << (a + b) / 4 << "\n";
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