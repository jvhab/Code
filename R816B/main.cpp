#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

void solve() {
	long long n, k, b, s;
	cin >> n >> k >> b >> s;
	vector<long long> res(n);

	res[0] = k * b;
	s -= k * b;
	if (s < 0) {
		cout << -1 << "\n";
		return;
	}
	for (size_t i = 0; i < n; ++i) {
		long long now = min(k - 1, s);
		res[i] += now;
		s -= now;
	}
	if (s > 0)
		cout << -1 << "\n";
	else {
		for (size_t i = 0; i < n; ++i) {
			cout << res[i] << " ";
		}
		cout << "\n";
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