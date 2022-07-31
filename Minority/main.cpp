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
		int res{};
		int one{};
		int zero{};
		for (size_t i = 0; i < s.size(); ++i) {
			if (s[i] == '0')
				zero++;
			else if (s[i] == '1')
				one++;
			if (one >= 1 && zero >= 1 && one > zero)
				res = max(res, zero);
			else if (one >= 1 && zero >= 1 && zero > one)
				res = max(res, one);
		}
		cout << res << "\n";
	}

	return 0;
}