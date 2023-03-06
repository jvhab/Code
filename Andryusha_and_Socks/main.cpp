#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int res{};
    vector<int> v1(2 * n);
    for (auto& i : v1) {
        cin >> i;
    }
    unordered_map<int, int> mp1;
    int temp{};
    for (size_t i = 0; i < 2 * n; ++i) {
        mp1[v1[i]]++;
        if (mp1[v1[i]] == 1) {
            temp++;
        }
        else {
            temp--;
        }
        res = max(res, temp);
    }
    cout << res << "\n";
    return 0;
}
