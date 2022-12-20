#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> v1(m);
    for (auto& i : v1) {
        cin >> i;
    }
    vector<int> res(n);
    for (size_t i = 0; i < m; i++) {
        for (int j = v1[i]; j <= n; j++) {
            if (res[j - 1] == 0) {
                res[j - 1] = v1[i];
            }
        }
    }
    for (auto i : res) {
        cout << i << " ";
    }
    return 0;
}