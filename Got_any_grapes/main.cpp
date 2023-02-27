#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x, y, z;
    cin >> x >> y >> z;
    int a, b, c;
    cin >> a >> b >> c;
    if (x > a) {
        cout << "NO" << "\n";
        return 0;
    }
    a = a - x;
    b = b - y + a;
    c = c - z + b;
    if (c < 0 || b < 0) {
        cout << "NO" << "\n";
    }
    else {
        cout << "YES" << "\n";
    }

    return 0;
}