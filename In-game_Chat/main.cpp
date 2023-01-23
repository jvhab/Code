#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int counts{};
    bool flag{ false };
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == ')' && !flag) {
            counts++;
        }
        else {
            flag = true;
        }
    }
    if (counts > n - counts) {
        cout << "YES" << "\n";
    }
    else {
        cout << "NO" << "\n";
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