#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> v1(n);
		for (auto& i : v1)
			cin >> i;
		map<int, int> mp;
		for (auto i : v1)
			mp[i]++;
		int res{};
		for (auto i : mp) {
			res = max(i.second, res);
		}
		cout << res << "\n";
	}
	return 0;
}