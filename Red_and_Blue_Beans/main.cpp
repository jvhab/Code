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
		long long r, b, d;
		cin >> r >> b >> d;
		if (r <= b) {
			if (r * (d + 1) < b) {
				cout << "NO" << "\n";
			}
			else {
				cout << "YES" << "\n";
			}
		}
		else {
			if (b * (d + 1) < r) {
				cout << "NO" << "\n";
			}
			else {
				cout << "YES" << "\n";
			}
		
		}
	}

	return 0;
}