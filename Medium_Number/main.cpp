#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    vector<int> v1(3);
    for (auto& i : v1) {
        cin >> i;
    }
    sort(v1.begin(), v1.end());
    cout << v1[1] << "\n";
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