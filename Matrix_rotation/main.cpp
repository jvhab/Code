#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	for (int i = 0; i < 4; i++) {
		if (a < b && a < c && c < d && b < d) {
			cout << "YES" << "\n";
			return;
		}
		else {
			swap(a, b);
			swap(a, d);
			swap(a, c);
		}
	}
	cout << "NO" << "\n";
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