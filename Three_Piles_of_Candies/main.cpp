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
		vector<long long> v1(3);
		long long sums{};
		for (auto& i : v1) {
			cin >> i;
			sums += i;
		}
		if (sums % 2 == 0) {
			cout << sums / 2 << "\n";
		}
		else {
			cout << sums / 2 << "\n";
		}
	}
	return 0;
}