#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    long long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    if (l1 != l2) {
        cout << l1 << " " << l2 << "\n";
    }
    else {
        cout << l1 << " " << r2 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int q;
    cin >> q;
    while (q--) {
        solve();
    }
    return 0;
}