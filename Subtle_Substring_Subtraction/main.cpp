#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int res1{}, res2{};
    int n = s.size();
    if (n % 2 == 0) {
        for (size_t i = 0; i < n; i++) {
            res1 += (s[i] - 'a' + 1);
        }
        cout << "Alice" << " " << res1 << "\n";
    }
    else {
        if (n == 1) {
            cout << "Bob" << " " << s[0] - 'a' + 1 << "\n";
        }
        else {
            if (s[0] > s[n - 1]) {
                for (size_t i = 0; i < n - 1; i++) {
                    res1 += s[i] - 'a' + 1;
                }
                res2 = s[n - 1] - 'a' + 1;
                if (res1 > res2) {
                    cout << "Alice" << " " << res1 - res2 << "\n";
                }
                else {
                    cout << "Bob" << " " << res2 - res1 << "\n";
                }
            }
            else {
                for (size_t i = 1; i < n; i++) {
                    res1 += s[i] - 'a' + 1;
                }
                res2 = s[0] - 'a' + 1;
                if (res1 > res2) {
                    cout << "Alice" << " " << res1 - res2 << "\n";
                }
                else {
                    cout << "Bob" << " " << res2 - res1 << "\n";
                }
            }
        }
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
