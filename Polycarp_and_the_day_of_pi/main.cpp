#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	string s;
	cin >> s;
	string s2 = "314159265358979323846264338327";
	int cnt{};
	for (size_t i = 0; i < s.size(); ++i) {
		if (s[i] != s2[i]) {
			cout << cnt << "\n";
			return;
		}
		else {
			cnt++;
		}
	}
	cout << cnt << "\n";
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