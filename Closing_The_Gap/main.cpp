#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> v1(n);
	int sums{};
	for (auto& i : v1) {
		cin >> i;
		sums += i;
	}
	if (sums % n == 0) {
		cout << 0 << "\n";
	}
	else {
		cout << 1 << "\n";
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}