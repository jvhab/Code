#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <numeric>
#include <unordered_map>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int res{};
	int temp{};
	int result{};
	bool flag{ false };
	bool flag2{ false };
	unordered_map<int, int> mp1;
	vector<int> v1(n);
	for (size_t i = 0; i < n; ++i) {
		int a;
		cin >> a;
		mp1[a] = i;
	}
	if (mp1.find(1) != mp1.end()) {
		temp = mp1[1] + 1 + mp1[1] + 1;
	}
	for (auto i : mp1) {
		for (auto j : mp1) {
			if (gcd(i.first, j.first) == 1) {
				res = i.second + 1 + j.second + 1;
			}
			result = max(res, result);
		}
	}
	if (result == 0) {
		cout << -1 << "\n";
		return;
	}
	if (result >= temp)
		cout << result << "\n";
	else
		cout << temp << "\n";
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