#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	long long n, b, x, y;
	cin >> n >> b >> x >> y;
	long long res{};
	long long ans{};
	for (size_t i = 1; i <= n; ++i) {
		if (res + x <= b) {
			res += x;
			ans += res;
		}
		else if (res + x > b) {
			res -= y;
			ans += res;
		}
	}
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