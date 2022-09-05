#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v1(n);
    for (auto& i : v1) {
        cin >> i;
    }
    int j{};
    for (size_t i = 0; i < k; ++i) {
        if (v1[j] != 0) {
            v1[j]--;
            v1[n - 1]++;
        }
        else {
            j++;
            if (j == n - 1) {
                break;
            }
            else {
                i--;
            }
        }
    }
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