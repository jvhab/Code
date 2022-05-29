#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto& it: a)
            cin >> it;
        int sums{};
        for (auto i: a)
            sums += i;
        if (sums % 2 != 0) {
            cout << "YES" << "\n";
            continue;
        }
        bool fl1 = false;
        bool fl2 = false;
        for (size_t i = 0; i < n; ++i) {
            if (a[i] % 2 == 0)
                fl1 = true;
            if (a[i] % 2 != 0)
                fl2 = true;
        }
        if (fl1 && fl2)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }

    return 0;
}
