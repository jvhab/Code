#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	int row{};
	int col{};
	if (k > (n + 1) / 2) {
		cout << -1 << "\n";
	}
	else {
		for (size_t i = 0; i < n; ++i) {
			for (size_t j = 0; j < n; ++j) {
				if (row == i && col == j && i % 2 == 0 && k != 0) {
					cout << "R";
					k--;
					row += 2;
					col += 2;
				}
				else {
					cout << ".";
				}
			}
			cout << "\n";
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