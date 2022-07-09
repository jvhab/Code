#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<string> v(n);
		for (auto& i : v)
			cin >> i;
		unordered_map<char, int> mp;
		for (size_t i = 0; i < n; ++i) {
			int sz = v[i].size();
			for (size_t j = 0; j < sz; ++j) {
				mp[v[i][j]] += 1;
			}
		}
		bool flag = false;
		for (auto i : mp) {
			if (i.second % n != 0) {
				cout << "NO" << "\n";
				flag = true;
				break;
			}
		}
		if (!flag)
			cout << "YES" << "\n";
	}
	return 0;
}