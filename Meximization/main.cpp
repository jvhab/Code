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
    vector<int> temp;
    sort(v1.begin(), v1.end());
    if (n == 1) {
        cout << v1[0] << "\n";
        return;
    }
    for (size_t i = 0; i < n - 1; ++i) {
        if (v1[i] != v1[i + 1]) {
            cout << v1[i] << " ";
        }
        else {
            temp.push_back(v1[i + 1]);
        }
    }
    temp.push_back(v1[v1.size() - 1]);
    sort(temp.begin(), temp.end(), std::greater<int>());
    for (auto i : temp)
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