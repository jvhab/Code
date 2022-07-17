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
		bool flag = false;
		int res{ 1 };
		if (s.size() == 1) {
			if (s[0] % 2 == 0)
				cout << 0 << "\n";
			else
				cout << -1 << "\n";
		}
		else {
			if (s[s.size() - 1] % 2 == 0) {
				cout << 0 << "\n";
			}
			else {
				for (size_t i = 0; i < s.size(); ++i) {
					if (s[i] % 2 == 0) {
						flag = true;
						if (i == 0)
							cout << res << "\n";
						else
							cout << res + 1 << "\n";
						break;
					}
				}
				if (!flag)
					cout << -1 << "\n";
			}

		}
	}
	return 0;
}