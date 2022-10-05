#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n, a, b;
	cin >> n >> a >> b;
	for (size_t i = 0; i < n; ++i) {
		cout << string(1, ('a' + i % b));
	}
	cout << "\n";
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