#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;

void solve() {
	long long l, r, k;
	cin >> l >> r >> k;
	if (l == r && l != 1) {
		cout << "YES" << "\n";
		return;
	}
	if (l == 1 && r == 1) {
		cout << "NO" << "\n";
		return;
	}
	long long temp = (r - l + 1) - (r / 2 - (l - 1) / 2);
	
	if (temp > k) {
		cout << "NO" << "\n";
	}
	else {
		cout << "YES" << "\n";
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