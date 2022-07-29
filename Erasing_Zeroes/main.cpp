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
		size_t first_one = s.find('1');
		int res{};
		bool flag = false;
		for (size_t i = s.size() - 1; i > first_one; --i) {
			if (s[i] == '1') {
				flag = true;
			}
			if (flag && s[i] == '0')
				res++;
		}
		cout << res << "\n";
	}
	return 0;
}