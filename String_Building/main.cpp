#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	string s;
	cin >> s;
	int counter{};
	for (size_t i = 0; i < s.size() - 1; ++i) {
		if (s[i] == s[i + 1]) {
			counter++;
		}
		else {
			if (counter == 0) {
				cout << "NO" << "\n";
				return;
			}
			else {
				counter = 0;
			}
		}
	}
	if (counter == 0) {
		cout << "NO" << "\n";
	}
	else {
		cout << "YES" << "\n";
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