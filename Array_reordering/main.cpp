#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> v1(n);
	for (auto& i : v1) {
		cin >> i;
	}
	sort(v1.begin(), v1.end(), [](int a, int b) {return (a % 2) < (b % 2); });
	int res{};
	for (size_t i = 0; i < n; ++i) {
		for (size_t j = i + 1; j < n; ++j) {
			if (gcd(v1[i], v1[j] * 2) > 1) {
				res++;
			}
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