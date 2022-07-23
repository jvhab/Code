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
		int a = 2 * 3;
		int b = 2 * 5;
		int c = 2 * 7;
		if (n <= a + b + c) {
			cout << "NO" << "\n";
		}
		else {
			cout << "YES" << "\n";
			if (n - a - b - c == a || n - a - b - c == b || n - a - b - c == c) {
				cout << a << " " << b << " " << c + 1 << " " << n - a - b - c - 1 << "\n";
			}
			else {
				cout << a << " " << b << " " << c << " " << n - a - b - c << "\n";
			}
		}

	}

	return 0;
}