#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	long long n;
	cin >> n;
	if (n < 2019) {
		cout << "NO" << "\n";
		return;
	}
	int y{};
	int x{};
	y = n % 2020;
	x = (n - y) / 2020 - y;
	if (x >= 0) {
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