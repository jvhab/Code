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
		int n;
		int m;
		cin >> n >> m;
		if ((n * m) % 2 == 0) {
			cout << (n * m) / 2 << "\n";
		}
		else if ((n * m) % 2 == 1) {
			cout << (n * m) / 2 + 1 << "\n";

		}
	}
	return 0;
}