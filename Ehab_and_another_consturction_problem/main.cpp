#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x;
    cin >> x;
    if (x % 2 == 0) {
        if (x / 2 >= 1) {
            cout << x << " " << 2 << "\n";
        }
        else {
            cout << -1 << "\n";
        }
    }
    else {
        if (x / 2 >= 1) {
            cout << x / 2 + 1 << " " << x / 2 + 1 << "\n";
        }
        else {
            cout << -1 << "\n";
        }
    }
    return 0;
}