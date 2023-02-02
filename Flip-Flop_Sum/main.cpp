#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int res{};
	bool flag = false;
	vector<int> v1(n);
	for (auto& i : v1) {
		cin >> i;
		res += i;
	}
	for (size_t i = 0; i < n - 1; i++) {
		if (v1[i] == -1 && v1[i + 1] == -1) {
			res += 4;
			flag = true;
			cout << res << "\n";
			return;
		}
	}
	if (!flag) {
		for (size_t i = 0; i < n - 1; i++) {
			if (v1[i] == -1 && v1[i + 1] == 1 || v1[i] == 1 && v1[i + 1] == -1) {
				cout << res << "\n";
				return;
			}
		}
		cout << res - 4 << "\n";
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