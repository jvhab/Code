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
		bool flag{ false };
		bool r{ false }, g{ false }, b{ false };
		for (auto i : s) {
			if (i == 'r')
				r = true;
			if (i == 'g')
				g = true;
			if (i == 'b')
				b = true;
			if (i == 'R' && !r) {
				cout << "NO" << "\n";
				flag = true;
				break;
			}
			if (i == 'G' && !g) {
				cout << "NO" << "\n";
				flag = true;
				break;
			}
			if (i == 'B' && !b) {
				cout << "NO" << "\n";
				flag = true;
				break;
			}
		}
		if (!flag)
			cout << "YES" << "\n";
	}

	return 0;
}