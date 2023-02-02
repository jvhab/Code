#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

void solve() {
	long long n, H;
	cin >> n >> H;
	vector<long long> v1(n);
	for (auto& i : v1) {
		cin >> i;
	}
	sort(v1.begin(), v1.end(), greater<long long>());
	long long res1 = H / v1[0];
	long long res2 = H / v1[1];
	long long res3 = v1[0] / v1[1];
	if (H % (v1[1] + v1[0]) == 0) {
		cout << round((2 * H) / (v1[0] + v1[1])) << "\n";
	}
	else {
		if (H % (v1[1] + v1[0]) <= v1[0])
			cout << (round((2 * H) / (v1[0] + v1[1]))) + 1 << "\n";
		else
			cout << round(((2 * H) / (v1[0] + v1[1]))) + 2 << "\n";
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