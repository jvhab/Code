#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;

void solve() {
	int n;
	cin >> n;
	if (n == 3) {
		cout << -1 << "\n";
		return;
	}
	vector<int> v1(n);
	iota(v1.begin(), v1.end(), 1);
	if (n % 2 == 0) {
		reverse(v1.begin(), v1.end());
		for (auto i : v1) {
			cout << i << " ";
		}
		cout << "\n";
	}
	else {
		reverse(v1.begin(), v1.end());
		reverse(v1.begin() + n / 2, v1.end());
		for (auto i : v1) {
			cout << i << " ";
		}
		cout << "\n";
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