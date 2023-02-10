#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int f(long long n) {
    int r{};
    while (n) {
        r += n % 10;
        n /= 10;
    }
    return r;
}

void solve() {
    long long n;
    cin >> n;
    if (n % 2 == 0) {
        cout << n / 2 << " " << n / 2 << "\n";
    }
    else {
        int l = 0;
        int r = n;
        int mid{};
        while (l <= r) {
            mid = (l + r) / 2;
            if (abs(f(mid) - f(n - mid)) <= 1) {
                cout << mid << " " << n - mid << "\n";
                return;
            }
            else if (f(mid) < f(n - mid)) {
                l = mid + 1;
            }
            else if (f(mid) > f(n - mid)) {
                r = mid - 1;
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