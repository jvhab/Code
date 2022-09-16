#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	long long n;
	cin >> n;
	if (n % 2 != 0) {
		cout << n / 2 << " " << n / 2 + 1 << "\n";
	}
	else {
		cout << (n - 1) * (-1) << " " << n << "\n";
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