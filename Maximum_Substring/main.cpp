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
	long long zero{};
	long long one{};
	for (size_t i = 0; i < n; ++i) {
		if (s[i] == '1') {
			one++;
		}
		else {
			zero++;
		}
	}
	long long temp{1};
	long long res = one * zero;
	char temp1 = s[0];
	for (size_t i = 1; i < n; ++i) {
		if (temp1 == s[i]) {
			temp++;
		}
		else {
			temp1 = s[i];
			res = max(res, temp * temp);
			temp = 1;
		}
	}
	if (temp >= 1) {
		res = max(res, temp * temp);
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