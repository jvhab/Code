#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	string s;
	cin >> s;
	string s2 = s + 'a';
	string s3 = 'a' + s;
	bool flag1{ false }, flag2{ false };
	for (int i = 0; i < s2.size() / 2; i++) {
		if (s2[i] != s2[s2.size() - 1 - i]) {
			flag1 = true;
			break;
		}
	}
	if (flag1) {
		cout << "YES" << "\n" << s2 << "\n";
		return;
	}
	for (int i = 0; i < s3.size() / 2; i++) {
		if (s3[i] != s3[s3.size() - 1 - i]) {
			flag2 = true;
			break;
		}
	}
	if (flag2) {
		cout << "YES" << "\n" << s3 << "\n";
		return;
	}
	cout << "NO" << "\n";
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