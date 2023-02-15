#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if (pow(3, n - 1) <= 10000000000) {
        cout << "YES" << "\n";
        long long temp{ 1 };
        for (long long i = 1; i <= n; ++i) {
            cout << temp << "\n";
            temp *= 3;
        }
        cout << "\n";
    }
    else {
        cout << "NO" << "\n";
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