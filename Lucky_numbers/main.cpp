#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int l, r;
	cin >> l >> r;
	if (r - l >= 100) {
		for (size_t i = l; i <= r; ++i) {
			if (i % 10 == 0 && (i / 10) % 10 == 9) {
				cout << i << "\n";
				break;
			}
		}
	}
	else {
		int tmp2{};
		int res{};
		for (size_t i = l; i <= r; ++i) {
			int temp = i;
			int mins{ 10000000 };
			int maxs{ 0 };
			while (temp != 0) {
				int cnt = temp % 10;
				temp /= 10;
				if (cnt > maxs)
					maxs = cnt;
				if (cnt < mins)
					mins = cnt;
			}
			if (maxs - mins > tmp2) {
				tmp2 = maxs - mins;
				res = i;
			}
		}
		if (res == 0) {
			cout << r << "\n";
		}
		else {
			cout << res << "\n";
		}
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