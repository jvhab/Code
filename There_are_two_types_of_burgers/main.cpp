#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int b, p, f;
	cin >> b >> p >> f;
	int h, c;
	cin >> h >> c;
	int res{};
	if (h > c) {
		while (b >= 2 && p > 0) {
			res += h;
			b -= 2;
			p--;
		}
		while (b >= 2 && f > 0) {
			res += c;
			b -= 2;
			f--;
		}
	}
	else {
		while (b >= 2 && f > 0) {
			res += c;
			b -= 2;
			f--;
		}
		while (b >= 2 && p > 0) {
			res += h;
			b -= 2;
			p--;
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