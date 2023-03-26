#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> v1(n);
	for (auto& i : v1) {
		cin >> i;
	}
	int a1{}, a2{};
	for (size_t i = 0; i < n; ++i) {
		if (v1[i] % 2 == 0)
			a1 += v1[i];
		else
			a2 += v1[i];
	}
	if (a1 > a2)
		cout << "YES" << "\n";
	else
		cout << "NO" << "\n";
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