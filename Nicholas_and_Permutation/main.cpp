#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v1(n);
    int mx{};
    int mn{};
    for (size_t i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        v1[i] = tmp;
        if (tmp == 1)
            mn = i;
        if (tmp == n)
            mx = i;
    }
    if (min(mx, mn) > n - max(mn, mx) - 1) {
        cout << max(mx, mn) << "\n";
    }
    else {
        cout << n - min(mx, mn) - 1 << "\n";
    }
    return 0;
}