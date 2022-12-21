#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> v1(n);
    for (auto& i : v1) {
        cin >> i;
    }
    sort(v1.begin(), v1.end(), greater<int>());
    cout << v1[k - 1] << "\n";
    return 0;
}