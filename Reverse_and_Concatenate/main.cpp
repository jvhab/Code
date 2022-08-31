#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int middle = n / 2;
    string s1;
    string s2;
    if (k == 0) {
        cout << 1 << "\n";
        return;
    }
    for (size_t i = 0; i < n; ++i) {
        if (n % 2 == 0) {
            if (i < middle) {
                s1 += s[i];
            }
            else {
                s2 += s[i];
            }
        }
        else {
            if (i < middle) {
                s1 += s[i];
            }
            else if (i > middle) {
                s2 += s[i];
            }
        }
    }
    reverse(s2.begin(), s2.end());
    if (s1 == s2) {
        cout << 1 << "\n";
    }
    else {
        cout << 2 << "\n";
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