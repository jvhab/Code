#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	string res;
	unordered_map<char, int> mp1;
	int temp{ 0 };
	for (size_t i = 0; i < n; ++i) {
		if (i % 2 == 0) {
			temp = 0;
			if (mp1.find(s[i]) == mp1.end()) {
				mp1[s[i]] = 0;
			}
			else {
				if (mp1[s[i]] != temp) {
					cout << "NO" << "\n";
					return;
				}
			}
		}
		else {
			temp = 1;
			if (mp1.find(s[i]) == mp1.end()) {
				mp1[s[i]] = 1;
			}
			else {
				if (mp1[s[i]] != temp) {
					cout << "NO" << "\n";
					return;
				}
			}
		}
	}
	cout << "YES" << "\n";
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