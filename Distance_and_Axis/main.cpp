#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	if (k > n) {
		cout << k - n << "\n";
	}
	else {
		if ((k % 2 == 0 && n % 2 == 0) || (k % 2 == 1 && n % 2 == 1)) {
			cout << 0 << "\n";
		}
		else {
			cout << 1 << "\n";
		}
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