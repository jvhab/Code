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
		string s;
		cin >> s;
		int res{};
		map<char, int> mp;
		for (auto i : s)
			mp[i]++;
		for (auto i : mp) {
			if (i.second == 1) {
				res += 2;
			}
			else if (i.second > 1) {
				res += i.second + 1;
			}
		}
		cout << res << "\n";

	}

	return 0;
}