#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> b(n);
	for (size_t i = 0; i < n; ++i) {
		int a1, b1;
		cin >> a1 >> b1;
		a[i] = a1;
		b[i] = b1;
	}
	vector<int> d;
	vector<int> c;
	long long ans{};
	for (size_t i = 0; i < n; ++i) {
		if (a[i] > b[i]) {
			c.push_back(b[i]);
			d.push_back(a[i]);
		}
		else {
			c.push_back(a[i]);
			d.push_back(b[i]);
		}
	}
	for (size_t i = 0; i < n; ++i) {
		ans += c[i];
	}
	ans += *max_element(d.begin(), d.end());
	ans = ans * 2;
	cout << ans << "\n";
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