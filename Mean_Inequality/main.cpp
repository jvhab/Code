#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    n *= 2;
    vector<long long> v1(n);
    for (auto& i : v1) {
        cin >> i;
    }
    sort(v1.begin(), v1.end());
    vector<int> res(n);
    int middle = n / 2 - 1;
    int temp{};
    int temp2{};
    for (size_t i = 0; i < n / 2; ++i) {
        cout << v1[n / 2 + i] << " " << v1[i] << " ";
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