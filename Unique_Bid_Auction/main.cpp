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
		vector<int> user(n);
		for (auto& i : user)
			cin >> i;
		map<int, int> mp;
		for (size_t i = 0; i < n; ++i) {
			mp[user[i]]++;
		}
		int res{INT_MAX};
		int result{ -1 };
		for (size_t i = 0; i < n; ++i) {
			if (mp[user[i]] == 1) {
				if (user[i] < res) {
					res = user[i];
					result = i + 1;
				}
			}
		}
		cout << result << "\n";
	}

	return 0;
}