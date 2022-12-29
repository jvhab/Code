#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;

void solve() {
	int n;
	cin >> n;
	cout << n << "\n";
	vector<int> v1(n);
	iota(v1.begin(), v1.end(), 1);
	for (int i = 0; i < n; i++) {
		for (auto i : v1) {
			cout << i << " ";
		}
		cout << "\n";
		if (i < n - 1) {
			swap(v1[i], v1[i + 1]);
		}
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