#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    bool flag{ false };
    cin >> n;
    for (size_t i = 0; i < n; ++i) {
        string s;
        cin >> s;
        int a;
        cin >> a;
        int b;
        cin >> b;
        if (a >= 2400 && b > a) {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
    return 0;
}