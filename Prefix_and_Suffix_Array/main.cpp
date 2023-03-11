#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<string> v1(n * 2 - 2);
	vector<string> res;
	for (auto& i : v1) {
		cin >> i;
	}
	for (size_t i = 0; i < n * 2 - 2; ++i) {
		if (v1[i].size() == n - 1) {
			res.push_back(v1[i]);
		}
	}
	reverse(res[0].begin(), res[0].end());
	if (res[0] == res[1]) {
		cout << "YES" << "\n";
	}
	else {
		cout << "NO" << "\n";
	}
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