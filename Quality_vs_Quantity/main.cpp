#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> v1(n);
    for (auto& i : v1) {
        cin >> i;
    }
    sort(v1.begin(), v1.end());
    int l = 0;
    int r = n - 1;
    long long red{};
    long long blue{};
    red += v1[r];
    blue += v1[l] + v1[l + 1];
    l += 2;
    r--;
    if (red > blue) {
        cout << "YES" << "\n";
        return;
    }
    while (l < r) {
        red += v1[r];
        blue += v1[l];
        if (red > blue) {
            cout << "YES" << "\n";
            return;
        }
        r--;
        l++;
    }
    cout << "NO" << "\n";
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