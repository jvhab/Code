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
		char c;
		cin >> c;
		bool flag = false;
		for (size_t i = 0; i < s.size(); ++i) {
			if (s[0] == c) {
				cout << "YES" << "\n";
				flag = true;
				break;
			}
			else if (s[s.size() - 1] == c) {
				cout << "YES" << "\n";
				flag = true;
				break;
			}
			else if (i % 2 == 0 && s[i] == c) {
				cout << "YES" << "\n";
				flag = true;
				break;
			}
		}
		if (!flag)
			cout << "NO" << "\n";
	}
	return 0;
}