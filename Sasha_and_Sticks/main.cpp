#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, k;
    cin >> n >> k;
    if ((n / k) % 2 == 1)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
    return 0;
}