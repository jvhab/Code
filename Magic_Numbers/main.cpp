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
	if (s[0] != '1') {
		cout << "NO" << "\n";
	}
	else {
		int temp{};
		for (size_t i = 0; i < s.size(); ++i) {
			if (s[i] == '4') {
				temp++;
			}
			else if (s[i] == '1') {
				temp = 0;
			}
			else {
				cout << "NO" << "\n";
				return 0;
			}
			if (temp > 2) {
				cout << "NO" << "\n";
				return 0;
			}
		}
		cout << "YES" << "\n";
	}

	return 0;
}