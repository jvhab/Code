#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	vector<pair<long long, long long>> v1(3);
	for (auto& i : v1) {
		cin >> i.first >> i.second;
	}
	long long res{};
	if (v1[0].second == v1[1].second && v1[2].second < v1[0].second) {
		res += abs(v1[0].first - v1[1].first);
	}
	else if (v1[0].second == v1[2].second && v1[1].second < v1[0].second) {
		res += abs(v1[0].first - v1[2].first);
	}
	else if (v1[1].second == v1[2].second && v1[0].second < v1[1].second) {
		res += abs(v1[1].first - v1[2].first);
	}
	cout << res << "\n";
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