#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	long long res{};
	vector<long long> v1(n + 1);
	for (size_t i = 1; i <= n; ++i) {
		long long a;
		cin >> a;
		v1[i] = a;
	}
	int temp = k;
	bool flag = false;
	int x{ 1 };
	for (size_t i = 0; i <= n; ++i) {
		flag = false;
		x = 1;
		if (temp == 0)
			break;
		while (i + k * x <= n) {
			if (v1[i % k] < v1[i + k * x]) {
				flag = true;
				swap(v1[i % k], v1[i + k * x]);
			}
			x++;
		}
		if (flag)
			temp--;
	}
	long long maxs{};
	for (size_t i = 0; i < k; ++i) {
		res += v1[i];
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