#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	int res{};
	while (b > 0 && c > 1) {
		b--;
		c -= 2;
		res += 3;
	}
	while (a > 0 && b > 1) {
		a--;
		b -= 2;
		res += 3;
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