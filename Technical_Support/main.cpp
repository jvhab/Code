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
	int q{};
	int a{};
	for (size_t i = 0; i < n; ++i) {
		if (s[i] == 'Q') {
			q++;
		}
		else {
			if (q > 0) {
				q--;
			}
		}
	}
	if (q == 0)
		cout << "Yes" << "\n";
	else
		cout << "No" << "\n";
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