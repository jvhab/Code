#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	vector<pair<int, int>> v1(m);
	for (auto& i : v1) {
		cin >> i.first >> i.second;
	}
	if (m < n) {
		cout << "YES" << "\n";
	}
	else {
		cout << "NO" << "\n";
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