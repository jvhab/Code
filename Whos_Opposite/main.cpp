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
		int a, b, c;
		cin >> a >> b >> c;
		int n = abs(a - b) * 2;
		if (a > n || b > n || c > n) {
			cout << -1 << "\n";
		}
		else
		{
			int d = n / 2 + c;
			int d1 = abs(n / 2 - c);
			if (d >= 1 && d <= n)
				cout << d << "\n";
			else
				cout << d1 << "\n";
		}
	}

	return 0;
}