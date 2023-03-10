#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v1(n);
    int a{}, b{};
    for (auto& i : v1) {
        cin >> i;
        if (i > 0) {
            a++;
        }
        else {
            b++;
        }
    }
    int temp = 0;
    for (size_t i = 1; i <= a; ++i) {
        cout << i << " ";
        temp = i;
    }
    for (size_t i = 1; i <= b; ++i) {
        temp -= 1;
        cout << temp << " ";
    }
    cout << "\n";
    temp = 0;
    for (size_t i = 1; i <= n; ++i) {
        if (b != 0) {
            if (i % 2 != 0) {
                cout << 1 << " ";
            }
            else {
                b--;
                cout << 0 << " ";
            }
        }
        else {
            temp++;
            cout << temp << " ";
        }
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