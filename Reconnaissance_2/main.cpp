#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> v1(n);
	for (auto& i : v1) {
		cin >> i;
	}
	pair<int, int> res;
	int sums{ INT_MAX };
	for (size_t i = 0; i < n - 1; ++i) {
		if (abs(v1[i] - v1[i + 1]) < sums) {
			res.first = i + 1;
			res.second = i + 2;
			sums = abs(v1[i] - v1[i + 1]);
		}
	}
	if (abs(v1[0] - v1[n - 1]) < sums) {
		res.first = 1;
		res.second = n;
	}
	cout << res.first << " " << res.second << "\n";
	return 0;
}