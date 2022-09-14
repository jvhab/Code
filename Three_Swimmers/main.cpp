#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


void solve() {
	long long p, a, b, c;
	cin >> p >> a >> b >> c;
	cout << min({ (((p + a - 1) / a) * a), (((p + b - 1) / b) * b), (((p + c - 1) / c) * c) }) - p << "\n";
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