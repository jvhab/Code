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
		vector<long long> v1(n);
		long long res{};
		for (auto& i : v1)
			cin >> i;
		for (size_t i = 0; i < n - 1; ++i) {
			res = max(res, (v1[i] * v1[i + 1]));
		}
		cout << res << "\n";
	}
	return 0;
}