#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;

void solve() {
	long long n;
	cin >> n;
	int cnt2{};
	int cnt3{};
	while (n % 2 == 0) {
		n /= 2;
		cnt2++;
	}
	while (n % 3 == 0) {
		n /= 3;
		cnt3++;
	}
	if (cnt2 <= cnt3 && n == 1) {
		cout << 2 * cnt3 - cnt2 << "\n";
	}
	else {
		cout << -1 << "\n";
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