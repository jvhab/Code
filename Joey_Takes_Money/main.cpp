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
	for (size_t i = 0; i < n - 1; i++) {
		long long temp = v1[i] * v1[i + 1];
		v1[i] = 1;
		v1[i + 1] = temp;
	}
	long long sums{ };
	for (size_t i = 0; i < n; i++) {
		sums += v1[i];
	}
	cout << sums * 2022 << "\n";
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