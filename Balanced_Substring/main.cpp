#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		if (n == 1) {
			cout << -1 << " " << -1 << "\n";
			continue;
		}
		bool flag = false;
		for (size_t i = 0; i < n - 1; ++i) {
			if (s[i] != s[i + 1]) {
				cout << i + 1 << " " << i + 2 << "\n";
				flag = true;
				break;
			}
		}
		if (!flag)
			cout << -1 << " " << -1 << "\n";
	}
	return 0;
}