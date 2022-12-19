#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, d;
    cin >> n >> d;
    vector<int> t(n);
    int sums{};
    int res{};
    for (auto& i : t) {
        cin >> i;
        sums += i;
    }
    sums += 10 * (n - 1);
    if (sums > d) {
        cout << -1 << "\n";
    }
    else {
        res = (n - 1) * 2;
        while (d - sums >= 5) {
            res++;
            sums += 5;
        }
        cout << res << "\n";
    }
    return 0;
}