#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> b(n);
	int zero_a{}, one_a{}, zero_b{}, one_b{};
	int sum{};
	int ans{};
	for (auto& i : a) {
		cin >> i;
		sum += i;
	}
	for (auto& i : b) {
		cin >> i;
		sum -= i;
	}
	for (size_t i = 0; i < n; ++i) {
		ans += (a[i] ^ b[i]);
	}
	ans = min(ans, 1 + abs(sum));
	cout << ans << "\n";
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