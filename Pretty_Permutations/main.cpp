#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		if ((n & 1) == 0) {
			for (size_t i = 1; i <= n; ++i) {
				if ((i & 1) == 0)
					cout << i - 1 << " ";
				else
					cout << i + 1 << " ";
			}
			cout << "\n";
		}
		else {
			cout << 3 << " " << 1 << " " << 2 << " ";
			for (size_t i = 4; i <= n; ++i) {
				if ((i & 1) == 0)
					cout << i + 1 << " ";
				else
					cout << i - 1 << " ";
			}
			cout << "\n";

		}
	}


	return 0;
}