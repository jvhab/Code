#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> mp;
    for (size_t i = 0; i < n; ++i) {
        mp[s[i]]++;
    }
    int res{};
    for (auto i : mp)
        res += i.second;
    cout << res + 1 << "\n";
    return 0;
}