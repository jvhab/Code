#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v1(n);
    bool flag{ false };
    for (auto& i : v1) {
        cin >> i;
        if (i == 0) {
            flag = true;
        }
    }
    if (!flag) {
        cout << 0 << "\n";
        return;
    }
    int res = n - 1;
    int tmp{ 0 };
    for (int i = n - 1; i >= 0; --i) {
        if (v1[i] == 1) {
            tmp = i;
        }
        else if (v1[i] == 0) {
            break;
        }
    }
    int tmp2{};
    for (int i = 0; i < n; ++i) {
        if (v1[i] == 1) {
            tmp2 = i;
        }
        else if (v1[i] == 0) {
            ;
            break;
        }
    }
    cout << tmp - tmp2 << "\n";
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