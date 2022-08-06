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
		long long l, r;
		cin >> l >> r;
		if (r - l >= r / 2) {
			cout << r % (r / 2 + 1) << "\n";
		}
		else {
			cout << r - l << "\n";
		}
	}
	return 0;
}