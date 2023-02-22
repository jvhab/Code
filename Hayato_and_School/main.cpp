#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> odd, even;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (x % 2 == 0) {
            even.push_back(i);
        }
        else {
            odd.push_back(i);
        }
    }
    if (odd.size() >= 3) {
        cout << "YES\n";
        cout << odd[0] << " " << odd[1] << " " << odd[2] << '\n';
    }
    else if (odd.size() >= 1 && even.size() >= 2) {
        cout << "YES\n";
        cout << odd[0] << " " << even[0] << " " << even[1] << '\n';
    }
    else {
        cout << "NO\n";
    }
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