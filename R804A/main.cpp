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
		long long n;
		cin >> n;
		if ((n & 1) != 0)
			cout << -1 << "\n";
		else {
			cout << 0 << " " << n / 2 << " " << n / 2 << "\n";
		}
	}
	return 0;
}