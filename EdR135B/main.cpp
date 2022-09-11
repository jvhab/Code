#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int mid = n / 2;
	if (n % 2 == 0) {
		for (size_t i = n - 2; i >= 1; --i) {
			cout << i << " ";
		}
		cout << n - 1 << " " << n << "\n";
	}
	else {
		cout << 1 << " " << 2 << " " << 3 << " ";
		for (size_t i = 2; i <= n; ++i) {
			if (n - i > 3)
				cout << n - i << " ";
		}
		cout << n - 1 << " " << n << "\n";
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