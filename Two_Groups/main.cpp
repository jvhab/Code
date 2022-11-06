#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<long long> a(n);
	long long ans{};
	for (auto& i : a) {
		cin >> i;
		ans += i;
	}
	long long sums1{}, sums2{};
	for (size_t i = 0; i < n; ++i) {
		if (a[i] <= 0) {
			sums1 += a[i];
		}
		else {
			sums2 += a[i];
		}
	}
	cout << abs(ans) << "\n";
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