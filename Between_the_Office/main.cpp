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
    string s;
    cin >> s;
    int res1{}, res2{};
    for (size_t i = 0; i < n - 1; ++i) {
        if (s[i] == 'S' && s[i + 1] == 'F') {
            res1++;
        }
        if (s[i] == 'F' && s[i + 1] == 'S') {
            res2++;
        }
    }
    if (res1 > res2) {
        cout << "YES" << "\n";
    }
    else {
        cout << "NO" << "\n";
    }
    return 0;
}
