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
		int c1 = n / 3;
		int c2 = c1;
		if (n % 3 == 1) {
			cout << c1 + 1 << " " << c2 << "\n";
		}
		else if (n % 3 == 2) {
			cout << c1 << " " << c2 + 1 << "\n";
		}
		else if (n % 3 == 0) {
			cout << c1 << " " << c2 << "\n";
		}
	}
	return 0;
}