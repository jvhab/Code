#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n, k1, k2;
	cin >> n >> k1 >> k2;
	int w, b;
	cin >> w >> b;
	if ((k1 + k2) / 2 >= w && (((n - k1) + (n - k2))) / 2 >= b) {
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