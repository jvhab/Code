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
	string s2 = "1";
	for (size_t i = 1; i < n; ++i) {
		if ('1' + s[i] != s2[i - 1] + s[i - 1]) {
			s2 += "1";
		}
		else {
			s2 += "0";
		}
	}
	std::cout << s2 << "\n";
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