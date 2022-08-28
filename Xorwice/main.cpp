#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	long long a, b;
	cin >> a >> b;
	// 6 =  0110
	// 12 = 1100
	// 4 =  0100
	cout << (a ^ b) << "\n";
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