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
	int res{1};
	sort(v1.begin(), v1.end());
	for (size_t i = 0; i < n - 1; ++i) {
		if (v1[i + 1] - v1[i] == 1) {
			res++;
			break;
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