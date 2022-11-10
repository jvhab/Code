#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    int n, d;
    cin >> n >> d;
    vector<int> v1(n);
    for (auto& i : v1) {
        cin >> i;
    }
    int countDay{ 1 };
    for (size_t i = 1; i < n; ++i) {
        if (d < countDay) {
            break;
        }
        while (v1[i] > 0 && d >= countDay) {
            d -= countDay;
            v1[0] += 1;
            v1[i]--;
        }
        countDay++;
    }
    cout << v1[0] << "\n";
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