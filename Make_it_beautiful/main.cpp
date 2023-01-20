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
    if (v1[n - 1] != v1[0]) {
        swap(v1[1], v1[n - 1]);
    }
    else {
        cout << "NO" << "\n";
        return;
    }
    cout << "YES" << "\n";
    for (auto i : v1) {
        cout << i << " ";
    }
    cout << "\n";
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