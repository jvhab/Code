#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> v1(n);
	unordered_map<int, int> mp1;
	int one{};
	int zero{};
	for (auto& i : v1) {
		cin >> i;
		mp1[i]++;
		if (i == 1) {
			one++;
		}
		else if (i == 0) {
			zero++;
		}
	}
	if (mp1[1] == n) {
		cout << 0 << "\n";
		return;
	}
	int res{};
	bool flag{ false };
	for (size_t i = 0; i < n; ++i) {
		if (v1[i] == 0) {
			zero--;
		}
		else if (v1[i] == 1) {
			one--;
			flag = true;
		}
		if (zero > 0 && flag && v1[i] == 1){
			res++;
			zero--;
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