#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<double> a(n);
        for (auto& it: a)
            cin >> it;
        double sums{};
        bool flag{false};
        for (size_t i = 0; i < n; ++i) {
            sums += a[i];
        }
        for (size_t i = 0; i < n; ++i) {
            if (((sums - a[i]) / (n - 1)) == a[i]) {
                cout << "YES" << "\n";
                flag = true;
                break;
            }
        }
        if (!flag)
            cout << "NO" << "\n";
    }
    return 0;
}
