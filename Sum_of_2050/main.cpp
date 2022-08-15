#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

void solve() {
	long long n;
	cin >> n;
	int res{};
	if (n % 2050 != 0) {
		cout << -1 << "\n";
	}
	else {
		long long temp = n / 2050;
		string s = to_string(temp);
		for (auto i : s)
			res += (i - '0');
		cout << res << "\n";
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
