#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n, a, b;
	cin >> n >> a >> b;
	if (a + b + 2 <= n || (a == b && b == n)) {
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