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
        vector<int> a(n);
        for (auto& i: a)
            cin >> i;
        int left{};
        int right{n - 1};
        vector<int> res(n);
        for (size_t i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                res[i] = a[left++];
            }
            else {
                res[i] = a[right--];
            }
        }
        for (auto i: res)
            cout << i << " ";
        cout << "\n";
    }

    return 0;
}
