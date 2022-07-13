#include <iostream>
#include <string>
#include <vector>
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
		vector<string> v1(n);
		vector<int> res(n);
		map<string, bool> mp;
		for (auto& i : v1) {
			cin >> i;
			mp[i] = true;
		}
		for (size_t i = 0; i < n; ++i) {
			string s1;
			string s2;
			int sizev1 = v1[i].size();
			for (size_t j = 0; j < sizev1; ++j) {
				s1 = v1[i].substr(0, j);
				s2 = v1[i].substr(j, sizev1 - j);
				if (mp[s1] && mp[s2]) {
					res[i] = 1;
				}
			}

		}
		for (auto i : res)
			cout << i;
		cout << "\n";
	}
	return 0;
}