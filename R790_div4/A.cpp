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
        string s;
        cin >> s;
        int sum1{};
        int sum2{};
        for (size_t i = 0; i < s.size(); ++i) {
            if (i < 3) {
                sum1 += (s[i] - '0');
            }
            else {
                sum2 += (s[i] - '0');
            }
        }
        if (sum1 == sum2) {
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n";
        }
    }    
    return 0;    
}
