#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

void solve() {
    string space;
    cin >> space;
    set<long long> mp1;
    set<long long> mp2;
    for (int i = 1; i <= 6; ++i) {
        long long temp;
        cin >> temp;
        if (i % 2 == 0) {
            mp1.insert(temp);
        }
        else {
            mp2.insert(temp);
        }
    }
    if (mp1.size() == 3 || mp2.size() == 3) {
        cout << "YES" << "\n";
        return;
    }
    else {
        cout << "NO" << "\n";
        return;
    }

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