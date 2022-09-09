#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	long long n, l, r, k;
	cin >> n >> l >> r >> k;
	vector<long long> v1(n);
	for (auto& i : v1) {
		cin >> i;
	}
	sort(v1.begin(), v1.end());
	int res{};
	auto norm_price = lower_bound(v1.begin(), v1.end(), l);
	auto high_price = upper_bound(v1.begin(), v1.end(), r);
	for (auto i = norm_price; i != high_price; ++i) {
		k -= *i;
		if (k >= 0) {
			res++;
		}
		else {
			break;
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