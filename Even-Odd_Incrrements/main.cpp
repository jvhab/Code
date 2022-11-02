#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n, q;
	cin >> n >> q;
	vector<long long> v1(n);
	long long sums{};
	long long cnt1{};
	long long cnt2{};
	for (auto& i : v1) {
		cin >> i;
		sums += i;
		if (i % 2 == 0)
			cnt2++;
		else
			cnt1++;
	}
	for (int i = 0; i < q; ++i) {
		long long a, b;
		cin >> a >> b;
		if (a % 2 == 0) {
			if (b % 2 == 0) {
				sums += (cnt2 * b);
			}
			else {
				sums += (cnt2 * b);
				cnt1 = n;
				cnt2 = 0;
			}
		}
		else {
			if (b % 2 == 0) {
				sums += (cnt1 * b);
			}
			else {
				sums += (cnt1 * b);
				cnt2 = n;
				cnt1 = 0;
			}
		}
		cout << sums << "\n";
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