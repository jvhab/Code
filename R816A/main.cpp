#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	int res{};
	if (n == 1 && m == 1) {
		cout << 0 << "\n";
		return;
	}
	if (n >= m)
		res = n - 1 + m - 1 + 1 + m - 1;
	else if (m > n)
		res = m - 1 + n - 1 + 1 + n - 1;

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