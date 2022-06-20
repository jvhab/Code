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
		int a, b;
		cin >> a >> b;
		if (b == 0 && a != 0)
			cout << a + 1 << "\n";
		else if (b != 0 && a == 0) {
			cout << 1 << "\n";
		}
		else {
			cout << a + b * 2 + 1 << "\n";
		}
	}
	return 0;
}