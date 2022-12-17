#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int res{};
	char temp = s[n / 2];
	if (n % 2 == 0) {
		res = 2;
		for (size_t i = 1; i <= n / 2; i++) {
			if (temp == s[n / 2 + i]) {
				res += 2;
			}
			else {
				break;
			}
		}
		cout << res << "\n";
	}
	else {
		res = 1;
		for (size_t i = 1; i <= n / 2; i++) {
			if (temp == s[n / 2 + i]) {
				res += 2;
			}
			else {
				break;
			}
		}
		cout << res << "\n";
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}