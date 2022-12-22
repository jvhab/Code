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
    string s;
    cin >> s;
    if (k == 1) {
        for (size_t i = 0; i < n; i++) {
            cout << "PRINT" << " " << s[i] << "\n";
            if (i != n - 1) {
                cout << "RIGHT" << "\n";
            }
        }
        return 0;
    }
    else if (k == n) {
        for (int i = n - 1; i >= 0; i--) {
            cout << "PRINT " << s[i] << "\n";
            if (i >= 1) {
                cout << "LEFT" << "\n";
            }
        }
        return 0;
    }
    else if (n - k >= n / 2) {
        while (k > 1) {
            cout << "LEFT" << "\n";
            k--;
        }
        for (size_t i = 0; i < n; i++) {
            cout << "PRINT" << " " << s[i] << "\n";
            if (i != n - 1) {
                cout << "RIGHT" << "\n";
            }
        }
    }
    else {
        while (k < n) {
            cout << "RIGHT" << "\n";
            k++;
        }
        for (int i = n - 1; i >= 0; i--) {
            cout << "PRINT " << s[i] << "\n";
            if (i >= 1) {
                cout << "LEFT" << "\n";
            }
        }
    }
    return 0;
}