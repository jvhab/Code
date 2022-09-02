#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;

void solve() {
    vector<int> v1(4);
    for (auto& i : v1) {
        cin >> i;
    }
    int sums = accumulate(v1.begin(), v1.end(), 0);
    if (sums == 4)
        cout << 2 << "\n";
    else if (sums == 1 || sums == 2 || sums == 3)
        cout << 1 << "\n";
    else if (sums == 0)
        cout << 0 << "\n";
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