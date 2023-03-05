#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int x, y, z;
	cin >> x >> y >> z;
	if (x - y == 0 && z == 0) {
		cout << "0" << "\n";
		return 0;
	}
	if (x - (y + z) > 0) {
		cout << "+" << "\n";
		return 0;
	}
	if (y - (x + z) > 0) {
		cout << "-" << "\n";
		return 0;
	}
	cout << "?" << "\n";
	return 0;
}