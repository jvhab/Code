#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long k2, k3, k5, k6;
	int res{};
	cin >> k2 >> k3 >> k5 >> k6;
	long long temp = min({k2, k5, k6});
	if (temp == k2) {
		res += 256 * k2;
		cout << res << "\n";
	}
	else {
		res += 256 * temp;
		k2 = k2 - temp;
		res += min(k2, k3) * 32;
		cout << res << "\n";
	}
	return 0;
}