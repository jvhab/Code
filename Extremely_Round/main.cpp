#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if (n <= 10) {
        cout << n << "\n";
    }
    else {
        int res{ 9 };
        int i = 10;
        while (true) {
            if (n / i <= 10) {
                res += n / i;
                break;
            }
            else {
                res += 9;
                i *= 10;
            }
        }
        cout << res << "\n";
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