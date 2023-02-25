#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	string s;
	cin >> s;
	int a{}, b{}, c{}, d{};
	int res{};
	for (size_t i = 0; i < s.size(); ++i) {
		if (s[i] == '(') {
			a++;
		}
		else if (s[i] == ')') {
			if (a > 0) {
				res++;
				a--;
			}
		}
		if (s[i] == '[') {
			c++;
		}
		else if (s[i] == ']') {
			if (c > 0) {
				res++;
				c--;
			}
		}
	}
	cout << res << "\n";
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