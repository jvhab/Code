#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	int i = 0;
	if (n % 2 == 0) {
		while (n != 0) {
			s += '1';
			n -= 2;
		}
	}
	else {
		s += '7';
		n -= 3;
		while (n != 0) {
			s += '1';
			n -= 2;
		}
	}
	cout << s << "\n";
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