#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n, m, r, c;
	cin >> n >> m >> r >> c;
	vector<string> v1(n);

	bool is_black = false;
	for (auto& i : v1) {
		cin >> i;
		if (i.find('B') != std::string::npos) {
			is_black = true;
		}
	}
	if (!is_black) {
		cout << -1 << "\n";
		return;
	}
	if (v1[r - 1][c - 1] == 'B') {
		cout << 0 << "\n";
		return;
	}
	
	else {
		for (size_t i = 0; i < n; ++i) {
			if (v1[i][c - 1] == 'B') {
				cout << 1 << "\n";
				return;
			}
		}
		for (size_t i = 0; i < m; ++i) {
			if (v1[r - 1][i] == 'B') {
				cout << 1 << "\n";
				return;
			}
		}
		cout << 2 << "\n";
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