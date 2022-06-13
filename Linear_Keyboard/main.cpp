#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		string s2;
		cin >> s2;
		vector<int> v;
		for (size_t i = 0; i < s2.size(); ++i) {
			v.push_back(s.find(s2[i]));
		}
		int res{};
		for (size_t i = 0; i < v.size() - 1; ++i) {
			res += abs(v[i] - v[i + 1]);
		}
		cout << res << "\n";
	}

	return 0;
}