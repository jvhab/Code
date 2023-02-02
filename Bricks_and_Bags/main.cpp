#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<long long> v1(n);
	for (auto& i : v1) {
		cin >> i;
	}
	sort(v1.begin(), v1.end());
	long long res{};
	for (size_t i = 2; i < n; i++) {
		long long temp = (v1[i] - v1[i - 1] + v1[i] - v1[0]);
		res = max(temp, res);
	}
	for (size_t i = 0; i < n - 2; i++) {
		long long temp = (v1[i + 1] - v1[i] + v1[n - 1] - v1[i]);
		res = max(temp, res);
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