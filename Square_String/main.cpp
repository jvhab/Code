#include <iostream>
#include <string>
#include <vector>
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
		if (s.size() % 2 != 0) {
			cout << "NO" << "\n";
			continue;
		}
		bool flag = false;
		for (size_t i = 0; i < s.size() / 2; ++i) {
			if (s[i] != s[s.size() / 2 + i]) {
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