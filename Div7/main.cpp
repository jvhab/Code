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
		cin >> n;
		if (n % 7 == 0)
			cout << n << "\n";
		else {
			for (int i = 1; i < 10; ++i) {
				if ((n + i - n % 10) % 7 == 0) {
					cout << n + i - n % 10 << "\n";
					break;
				}
			}
		}
	}

	return 0;
}