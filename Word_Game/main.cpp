#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <map>
using namespace std;

void solve() {
	int n;
	cin >> n;
	unordered_map<string, vector<int>> mp1;
	for (size_t i = 1; i <= 3; ++i) {
		for (size_t j = 0; j < n; ++j) {
			string s;
			cin >> s;
			mp1[s].push_back(i);
		}
	}
	map<int, int> mp2{ {1, 0}, {2, 0}, {3, 0} };
	for (auto i : mp1) {
		if (i.second.size() == 3)
			continue;
		else if (i.second.size() == 2) {
			mp2[i.second[0]]++;
			mp2[i.second[1]]++;
		}
		else if (i.second.size() == 1) {
			mp2[i.second[0]] += 3;
		}
	}
	for (auto i : mp2)
		cout << i.second << " ";
	cout << "\n";
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