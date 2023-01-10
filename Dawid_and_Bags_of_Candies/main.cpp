#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v1(4);
    for (auto& i : v1) {
        cin >> i;
    }
    sort(v1.begin(), v1.end());
    if (v1[0] + v1[3] == v1[1] + v1[2]) {
        cout << "YES" << "\n";
    }
    else if (v1[0] + v1[1] + v1[2] == v1[3]) {
        cout << "YES" << "\n";
    }
    else {
        cout << "NO" << "\n";
    }

    return 0;
}