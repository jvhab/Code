#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    int temp{};
    for (size_t i = 0; i < n; ++i) {
        if (temp < k) {
            s += ('a' + temp);
            temp++;
        }
        else {
            temp = 0;
            s += ('a' + temp);
            temp++;
        }
    }
    cout << s << "\n";
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
