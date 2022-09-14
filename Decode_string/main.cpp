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
	string res;
	for (int i = n - 1; i >= 0; --i) {
		if (s[i] != '0') {
			res += (s[i] + '0');
		}
		else {
			res += 'a' + (atoi(s.substr(i - 2, 2).c_str())) - 1;
			i -= 2;
		}
	}
	reverse(res.begin(), res.end());
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