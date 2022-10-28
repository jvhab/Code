#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int temp{};
    int res{};
    int res2{};
    for (size_t i = 0; i < s1.size(); ++i) {
        if (s1[i] == 'X') {
            temp++;
        }
        else {
            if (s1[i] == 'L') {
                res = 10 + temp;
            }
            else if (s1[i] == 'M') {
                res = 9;
            }
            else if (s1[i] == 'S') {
                res = 8 - temp;
            }
        }
    }
    temp = 0;
    for (size_t i = 0; i < s2.size(); ++i) {
        if (s2[i] == 'X') {
            temp++;
        }
        else {
            if (s2[i] == 'L') {
                res2 = 10 + temp;
            }
            else if (s2[i] == 'M') {
                res2 = 9;
            }
            else if (s2[i] == 'S') {
                res2 = 8 - temp;
            }
        }
    }
    if (res > res2) {
        cout << ">" << "\n";
    }
    else if (res < res2) {
        cout << "<" << "\n";
    }
    else {
        cout << "=" << "\n";
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