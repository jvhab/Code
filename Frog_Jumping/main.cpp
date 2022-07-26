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
		long long a, b, k;
		cin >> a >> b >> k;
		if (k % 2 == 0)
			cout << a * (k / 2) - b * (k / 2) << "\n";
		else
			cout << a * (k / 2) + a - b * (k / 2) << "\n";
	}

	return 0;
}