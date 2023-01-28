#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int ct{};
	vector<long long> v1(n);
	for (auto& i : v1) {
		cin >> i;
	}
	for (size_t i = 0; i < n - 1; i++) {
		if (v1[i] != v1[i + 1]) {
			cout << 1 << "\n";
			return;
		}
	}
	cout << n << "\n";
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