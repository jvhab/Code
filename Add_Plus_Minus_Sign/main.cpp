#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int u{ 0 };
    for (size_t i = 0; i < n; i++) {
        bool f = (s[i] == '1') && u;
        u ^= (s[i] - '0');
        if (i != 0) {
            cout << (f ? '-' : '+');
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