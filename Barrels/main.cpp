#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<long long> v1(n);
    for (auto& i : v1) {
        cin >> i;
    }
    sort(v1.begin(), v1.end(), greater<long long>());
    for (size_t i = 1; i < n; ++i) {
        if (k > 0) {
            k--;
            v1[0] += v1[i];
        }
        else {
            cout << v1[0] << "\n";
            return;
        }
    }
    cout << v1[0] << "\n";
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