#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> v1(n);
	string s;
	for (auto& i : v1) {
		cin >> i;
	}
	cin >> s;
	for (size_t i = 0; i < n - 1; ++i) {
		for (size_t j = i + 1; j < n; ++j) {
			if (v1[i] == v1[j]) {
				if (s[i] != s[j]) {
					cout << "NO" << "\n";
					return;
				}
			}
		}
	}
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