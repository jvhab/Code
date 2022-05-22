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
        int res{};
        for (int i = 1; i <= n; i = i * 10 + 1)
            for (int j = 1; j < 10; ++j) {
                if (i * j <= n) {
                    res++;
                }
            }
        cout << res << "\n";
    }
    return 0;
}
