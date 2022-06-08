#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int l;
		int r;
		cin >> l >> r;
		if (2 * l > r)
			cout << -1 << " " << - 1 << "\n";
		else {
			int x;
			int y;
			x = l;
			y = 2 * l;
			cout << x << " " << y << "\n";
		}
	}
	return 0;
}