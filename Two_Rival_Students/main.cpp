#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    int n, x, a, b;
    cin >> n >> x >> a >> b;
    if (a < b) {
        while (a != 1 && x > 0) {
            a--;
            x--;
        }
        while (b != n && x > 0) {
            b++;
            x--;
        }
    }
    else {
        while (a != n && x > 0) {
            a++;
            x--;
        }
        while (b != 1 && x > 0) {
            b--;
            x--;
        }
    }
    cout << abs(b - a) << "\n";
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