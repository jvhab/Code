#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    string s;
    cin >> s;
    string temp;
    for (size_t i = 0; i < 18; ++i) {
        temp += "Yes";
    }
    if (temp.find(s) != string::npos) {
        cout << "YES" << "\n";
    }
    else {
        cout << "NO" << "\n";
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