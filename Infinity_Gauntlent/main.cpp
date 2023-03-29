#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    unordered_map<string, string> st1{ {"purple", "Power"}, {"green", "Time"}, {"blue", "Space"}, {"orange", "Soul"}, {"red", "Reality"}, {"yellow", "Mind"} };
    int n;
    cin >> n;
    cout << 6 - n << "\n";
    for (size_t i = 0; i < n; ++i) {
        string tmp;
        cin >> tmp;
        st1.erase(tmp);
    }
    for (auto i : st1) {
        cout << i.second << "\n";
    }
    return 0;
}