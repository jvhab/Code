#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

void solve() {
	int n, c;
	cin >> n >> c;
	unordered_map<int, int> mp;
	for (size_t i = 0; i < n; ++i) {
		int a;
		cin >> a;
		mp[a]++;
	}
	int res{};
	for (auto i : mp) {
		if (i.second >= c) {
			res += c;
		}
		else {
			res += i.second;
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