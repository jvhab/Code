#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

void solve() {
	long long n;
	cin >> n;
	long long res{};
	for (int i = 2; i < 30; ++i) {
		long long temp = pow(2, i) - 1;
		if (n % temp == 0) {
			res = n / temp;
			break;
		}
	}
	cout << res << "\n";
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