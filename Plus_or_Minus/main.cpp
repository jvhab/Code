#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b == c) {
		cout << "+" << "\n";
	}
	else if (a - b == c) {
		cout << "-" << "\n";
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