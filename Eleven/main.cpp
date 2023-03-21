#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string s;
    for (size_t i = 0; i < n; ++i) {
        s += 'o';
    }
    int x, y;
    x = 1;
    y = 1;
    while (y <= n) {
        s[y - 1] = 'O';
        int temp = y;
        y = y + x;
        x = temp;
    }
    for (size_t i = 0; i < s.size(); ++i) {
        cout << s[i];
    }
    cout << "\n";
    return 0;
}