#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v1(3);
    for (auto& i : v1) {
        cin >> i;
    }
    sort(v1.begin(), v1.end());
    int temp = (v1[0] + v1[1]) - v1[2];
    if (temp > 0) {
        cout << 0 << "\n";
    }
    else if (temp == 0) {
        cout << 1 << "\n";
    }
    else {
        cout << v1[2] - (v1[0] + v1[1]) + 1 << "\n";
    }
    return 0;
}