#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

void solve() {
	long long s;
	cin >> s;
	long long res{};
	string s2 = to_string(s);
	int sz = s2.size();
	while (s >= 10) {
		s -= pow(10, sz - 1);
		s += pow(10, sz - 2);
		res += pow(10, sz - 1);
		sz = to_string(s).size();
	}
	res += s;
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