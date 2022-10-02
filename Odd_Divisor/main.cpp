#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	long long n;
	cin >> n;
	if ((n & (n - 1)) == 0) {
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