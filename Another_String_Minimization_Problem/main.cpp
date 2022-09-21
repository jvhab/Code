#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	vector<int> v1(n);
	string res = string(m, 'B');
	set<int> st;
	for (auto& i : v1) {
		cin >> i;
	}
	for (size_t i = 0; i < n; ++i) {
		if (v1[i] < m + 1 - v1[i]) {
			if (res[v1[i] - 1] == 'A') {
				res[m + 1 - v1[i] - 1] = 'A';
			}
			res[v1[i] - 1] = 'A';
		}
		else {
			if (res[m + 1 - v1[i] - 1] == 'A') {
				res[v1[i] - 1] = 'A';
			}
			res[m + 1 - v1[i] - 1] = 'A';
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