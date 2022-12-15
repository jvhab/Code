#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v1(n);
    for (auto& i : v1) {
        cin >> i;
    }
    long long sums{};
    for (size_t i = 0; i < n; i++) {
        sums += v1[i] - 1;
    }
    if (sums % 2 == 0) {
        cout << "maomao90" << "\n";
    }
    else {
        cout << "errorgorn" << "\n";
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