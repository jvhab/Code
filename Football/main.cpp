#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	int counts{1};
	for (size_t i = 0; i < s.size() - 1; ++i) {
		if (s[i] == s[i + 1] && s[i] == '1') {
			counts++;
		}
		else if (s[i] == s[i + 1] && s[i] == '0') {
			counts++;
		}
		if (s[i] != s[i + 1]) {
			counts = 1;
		}
		if (counts == 7) {
			cout << "YES" << "\n";
			return 0;
		}
	}
	cout << "NO" << "\n";
	return 0;
}