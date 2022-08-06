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
		int n, m;
		cin >> n >> m;
		vector<string> v(n);
		for (auto& i : v)
			cin >> i;
		int temp{0};
		int res{INT_MAX};
		for (size_t i = 0; i < n - 1; ++i) {
			for (size_t j = i + 1; j < n; ++j) {
				for (size_t k = 0; k < m; ++k) {
					temp += abs(v[i][k] - v[j][k]);
				}
				res = min(res, temp);
				temp = 0;
			}
		}
		cout << res << "\n";
	}
	return 0;
}