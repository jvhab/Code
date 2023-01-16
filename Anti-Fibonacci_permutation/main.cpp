#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;

void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i;
        for (int j = n; j >= 1; j--) {
            if (j != i) {
                cout << " " << j;
            }
        }
        cout << "\n";
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
