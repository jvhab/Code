#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> v1(n + 1);
	int tmp = n;
	int cnt = 1;
	for (size_t i = 2; i < n; i += 2) {
		if (k == 0) {
			break;
		}
		v1[i] = tmp;
		tmp--;
		k--;
	}
	if (k > 0) {
		cout << -1 << "\n";
		return;
	}
	for (size_t i = 1; i <= n; i++) {
		if (v1[i] == 0) {
			v1[i] = cnt;
			cnt++;
		}
	}
	for (size_t i = 1; i <= n; i++) {
		cout << v1[i] << " ";
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