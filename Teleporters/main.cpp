#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	long long n, c;
	cin >> n >> c;
	vector<long long> v1(n + 1);
	for (size_t i = 1; i <= n; ++i) {
		long long temp;
		cin >> temp;
		v1[i] = temp + i;
	}
	int res{};
	sort(v1.begin(), v1.end());
	for (size_t i = 1; i <= n; i++) {
		c -= v1[i];
		if (c >= 0) {
			res++;
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