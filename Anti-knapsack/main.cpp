#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> result;
	for (int i = k + 1; i <= n; i++) {
		result.push_back(i);
	}
	for (int i = (k + 1) / 2; i <= k - 1; ++i) {
		result.push_back(i);
	}
	cout << result.size() << "\n";
	for (auto i : result)
		cout << i << " ";
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