#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;

void solve() {
    int n;
    cin >> n;
    unordered_set<int> s1;
    vector<int> x(n);
    for (auto& i : x) {
        cin >> i;
    }
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = i + 1; j < n; ++j) {
            int a = abs(x[i] - x[j]);
            s1.insert(a);
        }
    }
    cout << s1.size() << "\n";
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