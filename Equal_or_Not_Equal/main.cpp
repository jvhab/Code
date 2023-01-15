#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
	string s;
	cin >> s;
	int nCt{};
	for (size_t i = 0; i < s.size(); i++) {
		if (s[i] == 'N') {
			nCt++;
		}
	}
	if (nCt == 1)
		cout << "NO" << "\n";
	else
		cout << "YES" << "\n";
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