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
		long long sums{};
		vector<long long> v1(n);
		for (auto& i : v1) {
			cin >> i;
			sums += i;
		}
		if (sums % n == 0) {
			cout << sums / n << "\n";
		}
		else {
			cout << sums / n + 1 << "\n";
		}
	}

	return 0;
}