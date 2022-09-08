#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n, x;
	cin >> n >> x;
	vector<int> v1(n * 2);
	for (auto& i : v1) {
		cin >> i;
	}
	sort(v1.begin(), v1.end());
	for (size_t i = 0; i < n; ++i) {
		if (v1[n + i] - v1[i] < x) {
			cout << "NO" << "\n";
			return;
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