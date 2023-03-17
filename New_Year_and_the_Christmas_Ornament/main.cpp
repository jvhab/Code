#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int y, b, r;
	cin >> y >> b >> r;
	while (true) {
		while (true) {
			if (r - b > 1) {
				r--;
			}
			else if (r - b <= 0) {
				b--;
			}
			else if (r - b == 1) {
				break;
			}
		}
		if (b - y > 1) {
			b--;
		}
		else if (b - y <= 0) {
			y--;
		}
		else if (b - y == 1) {
			break;
		}
	}
	cout << y + b + r << "\n";
	return 0;
}