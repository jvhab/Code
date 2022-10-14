#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;

void solve() {
	vector<string> v1(8);
	for (auto& i : v1) {
		cin >> i;
	}
	int r{}, b{};
	int r1{}, b1{};
	char res;
	int last_b;
	int last_r;
	for (size_t i = 0; i < 8; ++i) {
		r = 0;
		b = 0;
		for (size_t j = 0; j < 8; ++j) {
			if (v1[i][j] == 'R') {
				r++;
			}
		}
		if (r == 8) {
			cout << "R" << "\n";
			return;
		}
	}
	cout << "B" << "\n";
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