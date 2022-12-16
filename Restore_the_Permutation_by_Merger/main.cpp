#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v1(n * 2);
    for (auto& i : v1) {
        cin >> i;
    }
    unordered_set<int> st1;
    vector<int> res;
    for (size_t i = 0; i < n * 2; i++) {
        if (st1.find(v1[i]) == st1.end()) {
            st1.insert(v1[i]);
            res.push_back(v1[i]);
        }
    }
    for (auto i : res)
        cout << i << " ";
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