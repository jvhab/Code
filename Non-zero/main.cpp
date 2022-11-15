#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v1(n);
    int sums{};
    int res{};
    for (auto& i : v1) {
        cin >> i;
        sums += i;
        if (i == 0) {
            res++;
            sums += 1;
        }
    }
    if (sums == 0) {
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