#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	cin >> n;
	if (n > 0) {
		cout << n << "\n";
	}
	else {
		if (n % 10 > (n / 10) % 10) {
			string s = to_string(n);
			if (s.size() == 3 && s[s.size() - 1] == '0') {
				cout << 0 << "\n";
				return 0;
			}
			for (size_t i = 0; i < s.size(); ++i) {
				if (i != s.size() - 2) {
					cout << s[i];
				}
			}
		}
		else {
			string s = to_string(n);
			for (size_t i = 0; i < s.size(); ++i) {
				if (i != s.size() - 1) {
					cout << s[i];
				}
			}
		}
	}
	return 0;
}