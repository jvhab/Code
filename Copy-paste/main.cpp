#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> v1(n);
	for (auto& i : v1) {
		cin >> i;
	}
	int res{};
	sort(v1.begin(), v1.end());
	for (size_t i = 1; i < n; ++i) {
		int temp = v1[i];
		while (temp <= k) {
			if (temp + v1[0] <= k) {
				res++;
			}
			temp += v1[0];
		}
	}
	cout << res << "\n";
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