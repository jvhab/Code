#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < n; ++j) {
            if (j == i) {
                cout << k << " ";
            }
            else {
                cout << 0 << " ";
            }
        }
        cout << "\n";
    }
    cout << "\n";
    return 0;
}