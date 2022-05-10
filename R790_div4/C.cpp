#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> v1(n);
        for (auto& it : v1) {
            cin >> it;
        }
        vector<int> res;
        int sums{};
        for (size_t i = 0; i < n; ++i) {
            int temp{};
            for (size_t j = 0; j < m; ++j) {
                temp += (v1[i][j] - '0');
            }
            res.push_back(temp);
        }
        sort(res.begin(), res.end());
        vector<int> res2;
        for (size_t i = 0; i < res.size() - 1; ++i) {
            for (size_t j = i + 1 ; j < res.size(); ++j) {
                int temp2 = res[j] - res[i];
                res2.push_back(temp2);
            }
        }
        sort(res2.begin(), res2.end());
        cout << res2[0] << endl;
    }
    return 0;
}
