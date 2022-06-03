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
        for (size_t i = 0; i < n; ++i) {
            cout << (i + 1) % n + 1 << " ";
        }
        cout << "\n";
    }
    return 0;
}