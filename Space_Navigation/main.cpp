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
		int px, py;
		cin >> px >> py;
		string s;
		cin >> s;
		int U{}, D{}, R{}, L{};
		bool ok_x{ false }, ok_y{ false };
		bool res{ false };
		for (size_t i = 0; i < s.size(); ++i) {
			if (s[i] == 'U')
				U++;
			else if (s[i] == 'D')
				D++;
			else if (s[i] == 'R')
				R++;
			else if (s[i] == 'L')
				L++;
			if (px > 0) {
				if (R >= px) {
					ok_x = true;
				}
			}
			else {
				if (L >= -1 * px) {
					ok_x = true;
				}
			}
			if (py > 0) {
				if (U >= py) {
					ok_y = true;
				}
			}
			else {
				if (D >= -1 * py) {
					ok_y = true;
				}
			}
			if (ok_y && ok_x) {
				cout << "YES" << "\n";
				res = true;
				break;
			}
		}
		if (!res)
			cout << "NO" << "\n";
	}
	return 0;
}