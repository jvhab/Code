#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> v1(n);
    int sums{};
    int res{};
    for (auto& i : v1) {
        cin >> i;
        sums += i;
    }
    if (m >= sums) {
        cout << 0 << "\n";
    }
    else {
        cout << sums - m << "\n";
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