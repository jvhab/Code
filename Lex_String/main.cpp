#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    string s1, s2;
    cin >> s1 >> s2;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    int pS1{};
    int pS2{};
    string res;
    int cnt1 = k;
    int cnt2 = k;
    while (pS1 < n && pS2 < m) {
        if (s1[pS1] < s2[pS2] && cnt1 > 0) {
            res += s1[pS1];
            pS1++;
            cnt1--;
            cnt2 = k;
        }
        else if (s1[pS1] > s2[pS2] && cnt2 > 0) {
            res += s2[pS2];
            pS2++;
            cnt2--;
            cnt1 = k;
        }
        else {
            if (cnt1 == 0) {
                res += s2[pS2];
                cnt1 = k;
                pS2++;
                cnt2--;
            }
            else if (cnt2 == 0) {
                res += s1[pS1];
                cnt2 = k;
                pS1++;
                cnt1--;
            }
        }
    }
    cout << res << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}