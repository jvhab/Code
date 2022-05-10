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
        int n;
        cin >> n;
        vector<int> conf(n);
        for (auto& it: conf) {
            cin >> it;
        }
        int mins = *(min_element(conf.begin(), conf.end()));
        int maxs = *(max_element(conf.begin(), conf.end()));
        int sums{};
        sort(conf.begin(), conf.end());
        for (size_t i = 0; i < n; ++i) {
            sums += (conf[i] - mins);
        }
        cout << sums << "\n";
    }
    return 0;
}
