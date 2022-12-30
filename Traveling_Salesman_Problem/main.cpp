#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<pair<int, int>> v1(n);
	int x1{}, x2{}, y1{}, y2{};
	for (auto& i : v1) {
		cin >> i.first >> i.second;
		if (x1 < i.first)
			x1 = i.first;
		if (x2 > i.first)
			x2 = i.first;
		if (y1 < i.second)
			y1 = i.second;
		if (y2 > i.second)
			y2 = i.second;
	}
	int res{};
	cout << (abs(x1) + abs(x2) + abs(y1) + abs(y2)) * 2 << "\n";
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