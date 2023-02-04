#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int res{};
	unordered_map<char, int> mp1;
	for (size_t i = 0; i < n; i++) {
		mp1[s[i]]++;
	}
	int len2 = mp1.size();
	unordered_map<char, int> mp2;
	for (size_t i = 0; i < n - 1; i++) {
		mp2[s[i]]++;
		int len1 = mp2.size();
		mp1[s[i]]--;
		if (mp1[s[i]] == 0) {
			len2--;
		}
		res = max(res, (len1 + len2));
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