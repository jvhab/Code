#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <numeric>
#include <map>

using namespace std;

void solve() {
	int n;
	cin >> n;
	unordered_set<int> st1;
	vector<int> v1(10);
	iota(v1.begin(), v1.end(), 0);
	for (size_t i = 0; i < n; ++i) {
		int a;
		cin >> a;
		st1.insert(a);
	}
	int res{};
	unordered_set<int> temp;
	for (int i = 0; i < 10000; ++i) {
		temp.clear();
		bool flag{ false };
		map<int, int> mp;
		string s = to_string(i);
		if (s.size() == 1) {
			s = string(3, '0') + s;
		}
		else if (s.size() == 2) {
			s = string(2, '0') + s;
		}
		else if (s.size() == 3) {
			s = string(1, '0') + s;
		}
		for (size_t j = 0; j < 4; ++j) {
			temp.insert(stoi(string(1, s[j])));
			mp[stoi(string(1, s[j]))]++;
		}
		for (auto k : mp) {
			if (k.second != 2) {
				flag = true;
			}
		}
		if (flag)
			continue;
		if (temp.size() != 2) {
			continue;
		}
		else if (temp.size() == 2) {
			for (auto j : temp) {
				if (st1.find(j) != st1.end()) {
					flag = true;
				}
			}
			if (!flag) {
				res++;
			}
		}
		else {
			continue;
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