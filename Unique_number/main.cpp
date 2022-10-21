#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int x;
	cin >> x;
	int sums{};
	for (int i = 1; i <= 9; ++i) {
		sums += i;
	}
	if (x > sums) {
		cout << -1 << "\n";
		return;
	}
	if (x < 10) {
		cout << x << "\n";
		return;
	}
	int temp{9};
	vector<int> res = {9};
	while (true) {
		x -= temp;
		temp--;
		if (x <= temp) {
			res.push_back(x);
			break;
		}
		else {
			res.push_back(temp);
		}
	}
	for (int i = res.size() - 1; i >= 0; --i)
		cout << res[i];
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