#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<long long> v1(n);
	for (auto& i : v1) {
		cin >> i;
	}
	if (n == 2) {
		cout << 0 << "\n";
		for (auto i : v1) {
			cout << i << " ";
		}
		cout << "\n";
		return;
	}
	int res{};
	for (size_t i = 1; i < n - 1; ++i) {
		if (v1[i] > v1[i + 1] && v1[i] > v1[i - 1]) {
			res++;
			if (i + 2 < n) {
				v1[i + 1] = max(v1[i], v1[i + 2]);
			}
			else {
				v1[i + 1] = v1[i];
			}
		}
	}
	cout << res << "\n";
	for (auto i : v1) {
		cout << i << " ";
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