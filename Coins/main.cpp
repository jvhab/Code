#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, s;
    cin >> n >> s;
    if (s % n == 0) {
        cout << s / n << "\n";
    }
    else {
        cout << s / n + 1 << "\n";
    }
    return 0;
}