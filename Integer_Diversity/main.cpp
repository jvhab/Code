#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> v1(n);
	unordered_map<int, int> mp;
	for (auto& i : v1) {
		cin >> i;
		mp[i]++;
	}
	if (mp.size() == v1.size()) {
		cout << mp.size() << "\n";
		return;
	}
	int res = mp.size();
	for (auto i : mp) {
		if (i.first != 0) {
			if (i.second > 1 && mp.find((-1) * i.first) == mp.end()) {
				res++;
			}
		}
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