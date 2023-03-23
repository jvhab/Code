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
    int m;
    cin >> m;
    vector<int> v1(n);
    for (auto& i : v1) {
        cin >> i;
    }
    sort(v1.begin(), v1.end(), greater<int>());
    int res{};
    int cnt{};
    for (size_t i = 0; i < n; ++i) {
        res++;
        cnt += v1[i];
        if (cnt >= m) {
            cout << res << "\n";
            break;
        }
    }
    return 0;
}