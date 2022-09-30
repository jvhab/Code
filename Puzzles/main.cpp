#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	vector<int> v1(m);
	for (auto& i : v1) {
		cin >> i;
	}
	int res{ INT_MAX };
	sort(v1.begin(), v1.end());
	for (size_t i = 0; i <= m - n; ++i) {
		res = min(res, v1[i + n - 1] - v1[i]);
	}
	cout << res << "\n";
	return 0;
}