#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	string s;
	cin >> s;
	int one{}, zero{};
	for (auto i : s) {
		if (i == '0') {
			zero++;
		}
		if (i == '1') {
			one++;
		}
	}
	if (min(zero, one) % 2 == 0) {
		cout << "NET" << "\n";
	}
	else {
		cout << "DA" << "\n";
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