#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n != 5) {
        cout << "NO" << "\n";
        return;
    }
    unordered_map<char, int> tim;
    tim['T'] = 0;
    tim['i'] = 0;
    tim['m'] = 0;
    tim['u'] = 0;
    tim['r'] = 0;
    for (size_t i = 0; i < n; ++i) {
        tim[s[i]]++;
    }
    for (auto i : tim) {
        if (i.second == 0) {
            cout << "NO" << "\n";
            return;
        }
    }
    cout << "YES" << "\n";
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