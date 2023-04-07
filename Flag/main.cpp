#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<string> v1(n);
    for (auto& i : v1) {
        cin >> i;
    }
    for (size_t i = 0; i < n; ++i) {
        unordered_set<char> st1;
        for (size_t j = 0; j < m; ++j) {
            st1.insert(v1[i][j]);
        }
        if (st1.size() > 1) {
            cout << "NO" << "\n";
            return 0;
        }
        if (i + 1 <= n - 1) {
            if (v1[i][0] == v1[i + 1][0]) {
                cout << "NO" << "\n";
                return 0;
            }
        }
    }
    cout << "YES" << "\n";
    return 0;
}