#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	string s1;
	string s2;
	cin >> s1 >> s2;
	string s3 = s1 + s2;
	sort(s3.begin(), s3.end());
	int res{3};
	for (size_t i = 0; i < 3; ++i) {
		if (s3[i] == s3[i + 1]) {
			res--;
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