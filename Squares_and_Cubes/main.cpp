#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;
		set<long long> res;
		for (long long i = 1; i * i <= n; ++i) {
			res.insert(i * i);
		}
		for (long long i = 1; i * i * i <= n; ++i) {
			res.insert(i * i * i);
		}
		cout << res.size() << "\n";
	}
	return 0;
}