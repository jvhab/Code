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
    vector<int> v1(n);
    for (auto& i : v1) {
        cin >> i;
    }
    vector<int> res;
    vector<vector<int>> v2(n);
    for (size_t i = 0; i < n; i++) {
        int temp{};
        for (size_t j = 0; j < v1[i]; j++) {
            int a;
            cin >> a;
            v2[i].push_back(a);
            temp += a * 5;
            temp += 15;
        }
        res.push_back(temp);
    }
    sort(res.begin(), res.end());
    cout << res[0] << "\n";
    return 0;
}