#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c;
	cin >> a >> b >> c;
	int res{};
	for (int i = 1; i <= a; i++) {
		if (i * 2 <= b && i * 4 <= c) {
			res = i + (i * 2) + (i * 4);
		}
		else {
			break;
		}
	}
	cout << res << "\n";
	return 0;
}