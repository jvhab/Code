#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
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
    unordered_map<int, int> res;
    for (auto i : v1) {
        res[i]++;
    }
    int mx{};
    for (auto i : res) {
        if (mx < i.second) {
            mx = i.second;
        }
    }
    cout << mx << "\n";
    return 0;
}