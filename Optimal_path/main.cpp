#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	long long n, m;
	cin >> n >> m;
	long long res{};
	long long res2{};
	long long res3{};
	for (long long i = 1; i <= m; ++i) {
		res += i;
	}
	for (long long i = 2; i <= n; ++i) {
		res += (i - 1) * m + m;
	}

	/*else if (n > m) {
		for (long long i = 1; i <= n; ++i) {
			res += (i - 1) * m + 1;
		}
		for (long long i = 2; i <= m; ++i) {
			res += (i - 1) * m + i;
		}
	}
	else if (n == m) {
		for (long long i = 1; i <= m; ++i) {
			res2 += i;
		}
		for (long long i = 2; i <= n; ++i) {
			res2 += (i - 1) * m + m;
		}
		for (long long i = 1; i <= n; ++i) {
			res3 += (i - 1) * m + 1;
		}
		for (long long i = 2; i <= m; ++i) {
			res3 += (i - 1) * m + i;
		}
		res = min(res3, res2);
	}*/
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