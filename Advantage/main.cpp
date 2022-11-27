#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<long long> v1(n);
	for (auto& i : v1) {
		cin >> i;
	}
	vector<long long> v2 = { v1.begin(), v1.end() };
	sort(v2.begin(), v2.end(), greater<long long>());
	for (size_t i = 0; i < n; ++i) {
		if (v1[i] != v2[0]) {
			cout << v1[i] - v2[0] << " ";
		}
		else {
			cout << v1[i] - v2[1] << " ";
		}
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