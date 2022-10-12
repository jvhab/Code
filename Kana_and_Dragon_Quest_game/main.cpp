#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int x, n, m;
	cin >> x >> n >> m;
	while (x > 19 && n != 0) {
		x = x / 2 + 10;
		n--;
	}
	while (m != 0) {
		x -= 10;
		m--;
	}
	if (x <= 0) {
		cout << "YES" << "\n";
	}
	else {
		cout << "NO" << "\n";
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