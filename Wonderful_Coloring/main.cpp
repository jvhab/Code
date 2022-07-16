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
		string s;
		cin >> s;
		int temp{};
		int res{};
		map<char, int> mp;
		for (auto i : s) {
			mp[i]++;
		}
		for (auto i : mp) {
			if (i.second == 1) {
				temp++;
			}
			else {
				res++;
			}
		}
		cout << res + temp / 2 << "\n";
	}

	return 0;
}