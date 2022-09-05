#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v1(n);
    for (auto& i : v1) {
        cin >> i;
    }
    unordered_set<int> v2;
    int temp{};
    for (int i = n - 1; i >= 0; --i) {
        v2.insert(v1[i]);
        temp++;
        if (v2.size() != temp) {
            cout << i + 1 << "\n";
            return;
        }

    }
    cout << 0 << "\n";
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