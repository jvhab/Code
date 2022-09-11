#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int maxs{};
	int res{};
	vector<int> v1(n);
	for (size_t i = 0; i < n; ++i) {
		int a;
		cin >> a;
		v1[i] = a;
		if (maxs < a) {
			maxs = a;
			res = i + 1;
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