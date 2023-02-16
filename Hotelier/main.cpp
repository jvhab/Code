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
    vector<int> v1(10);
    int l{};
    int r{ 9 };
    for (size_t i = 0; i < n; ++i) {
        if (s[i] == 'L') {
            for (size_t j = 0; j < 10; ++j) {
                if (v1[j] == 0) {
                    v1[j] = 1;
                    break;
                }
            }
        }
        if (s[i] == 'R') {
            for (int j = 9; j >= 0; --j) {
                if (v1[j] == 0) {
                    v1[j] = 1;
                    break;
                }
            }
        }
        if (s[i] != 'R' && s[i] != 'L') {
            v1[s[i] - '0'] = 0;
        }
    }
    for (auto i : v1) {
        cout << i;
    }
    return 0;
}