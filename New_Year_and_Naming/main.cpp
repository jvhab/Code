#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<string> v1(n);
    vector<string> v2(m);
    for (auto& i : v1) {
        cin >> i;
    }
    for (auto& i : v2) {
        cin >> i;
    }
    int q;
    cin >> q;
    while (q--) {
        int y;
        cin >> y;
        y--;
        string res{};
        res = v1[y % n] + v2[y % m];
        cout << res << "\n";
    }
    return 0;
}