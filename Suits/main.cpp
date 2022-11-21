#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int min_1 = min({ a, d });
    int min_2 = min({ b, c, d });
    int max_price = max(e, f);
    int res{};
    if (e >= f) {
        res = min_1 * e;
        res += f * (min({ min_2, d - min_1 }));
    }
    else {
        res = min_2 * f;
        res += e * (min({ min_1, d - min_2 }));
    }
    cout << res << "\n";
    return 0;
}