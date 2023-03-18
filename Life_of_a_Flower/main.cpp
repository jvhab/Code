#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> v1(n);
	for (auto& i : v1) {
		cin >> i;
	}
	int res{ 1 };
	int cnt{};
	int tmp{};
	for (size_t i = 0; i < n; ++i) {
		if (v1[i] == 0) {
			cnt++;
			tmp = 0;
		}
		else if (v1[i] == 1) {
			tmp++;
			res++;
			cnt = 0;
			if (tmp >= 2) {
				res += 5;
				res--;
			}
		}
		if (cnt >= 2) {
			cout << -1 << "\n";
			return;
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