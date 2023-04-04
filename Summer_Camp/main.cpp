#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    for (size_t i = 1; i <= 1000; ++i) {
        s += to_string(i);
    }
    int n;
    cin >> n;
    cout << s[n - 1] << "\n";
    return 0;
}