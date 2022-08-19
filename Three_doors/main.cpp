#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int x;
	cin >> x;
	vector<int> v1(3);
	for (auto& i : v1)
		cin >> i;
	for (size_t i = 0; i < 3; ++i) {
		if (v1[x - 1] == 0 && i == 2)
			cout << "YES" << "\n";
		else if (v1[x - 1] != 0)
			x = v1[x - 1];
		else {
			cout << "NO" << "\n";
			break;
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