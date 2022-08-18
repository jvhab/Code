#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    if (n == 1)
        cout << 2 << "\n";
    else if (n == 2)
        cout << 1 << "\n";
    else {
        if (n % 3 != 0)
            cout << n / 3 + 1 << "\n";
        else
            cout << n / 3 << "\n";
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