#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    long long a, b;
    cin >> a >> b;
    int res{};
    long long temp = abs(a - b);
    res = temp / 5;
    if (temp % 5 == 4 || temp % 5 == 3) {
        res += 2;
    }
    else if (temp % 5 == 2 || temp % 5 == 1) {
        res++;
    }
    cout << res << "\n";
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