#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v1(n);
    for (auto& i : v1) {
        cin >> i;
    }
    cout << 1 << " " << n << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}