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
    sort(v1.begin(), v1.end());
    if (v1[0] > 1) {
        cout << n << "\n";
        return;
    }
    int counter{};
    for (size_t i = 0; i < n; ++i) {
        if (v1[i] == 1) {
            counter++;
        }
    }
    cout << n - counter / 2 << "\n";
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