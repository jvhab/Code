#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n, a, b, c, d;
	cin >> n >> a >> b >> c >> d;
	int temp1 = n * (a - b);
	int temp2 = n * (a + b);
	if (temp1 > c + d || c - d > temp2) {
		cout << "No" << "\n";
	}
	else {
		cout << "Yes" << "\n";
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