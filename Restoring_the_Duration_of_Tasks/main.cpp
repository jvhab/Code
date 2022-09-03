#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> start(n);
    vector<int> finish(n);
    for (auto& i : start) {
        cin >> i;
    }
    for (auto& i : finish) {
        cin >> i;
    }
    for (size_t i = 0; i < n; ++i) {
        if (i == 0) {
            cout << finish[i] - start[i] << " ";
        }
        else {
            if (finish[i - 1] > start[i]) {
                cout << finish[i] - finish[i - 1] << " ";
            }
            else {
                cout << finish[i] - start[i] << " ";
            }
        }
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