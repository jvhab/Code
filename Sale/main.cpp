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
	vector<int> v1(n);
	for (auto& i : v1) {
		cin >> i;
	}
	int res{};
	sort(v1.begin(), v1.end());
	for (size_t i = 0; i < m; ++i) {
		if (v1[i] < 0) {
			res += v1[i] * (-1);
		}
	}
	cout << res << "\n";
	return 0;
}