#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    int cnt2{}, cnt3{}, cnt5{};
    while (n % 2 == 0) {
        cnt2++;
        n /= 2;
    }
    while (n % 3 == 0) {
        cnt3++;
        n /= 3;
    }
    while (n % 5 == 0) {
        cnt5++;
        n /= 5;
    }
    if (n != 1) {
        cout << -1 << "\n";
    }
    else {
        cout << cnt2 + (cnt3 * 2) + (cnt5 * 3) << "\n";
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