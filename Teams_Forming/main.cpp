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
    sort(v1.begin(), v1.end());
    int res{};
    for (size_t i = 0; i < n - 1; i += 2) {
        res += v1[i + 1] - v1[i];
    }
    cout << res << "\n";
    return 0;
}