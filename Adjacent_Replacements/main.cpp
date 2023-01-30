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
    for (size_t i = 0; i < n; i++) {
        cout << v1[i] - !(v1[i] & 1) << " ";
    }
    return 0;
}