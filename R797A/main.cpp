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
		int a;
		int b;
		int c;
		if (n % 3 != 0) {
			b = n / 3 + 2;
			a = b - 1;
			c = n - a - b;
			if (a + b + c != n || c == 0) {
				a--;
				c++;
			}
		}
		else {
			b = n / 3 + 1;
			a = b - 1;
			c = n - a - b;
			if (a + b + c != n)
				a--;
		}
		cout << a << " " << b << " " << c << "\n";
	}
	return 0;
}