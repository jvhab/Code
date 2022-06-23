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
		vector<int> v1(n);
		for (auto& i : v1)
			cin >> i;
		int sums{};
		for (auto i : v1)
			sums += i;
		if (sums < n)
			cout << 1 << "\n";
		else if (sums == n)
			cout << 0 << "\n";
		else if (sums > n) {
			cout << sums - n << "\n";
		}
	}
	return 0;
}