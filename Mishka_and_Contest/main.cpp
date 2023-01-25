#include <iostream>
#include <string>
#include <vector>
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
    int res{};
    for (int i = 0; i < n; i++) {
        if (v1[i] <= k) {
            res++;
        }
        else {
            for (int j = n - 1; j >= i; j--) {
                if (v1[j] <= k) {
                    res++;
                }
                else {
                    cout << res << "\n";
                    return 0;
                }
            }
        }
    }
    cout << res << "\n";
    return 0;
}