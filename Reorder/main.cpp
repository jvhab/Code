#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	vector<double> v1(n);
	for (auto& i : v1) {
		cin >> i;
	}
	double sums = accumulate(v1.begin(), v1.end(), 0);
	if (sums == m)
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