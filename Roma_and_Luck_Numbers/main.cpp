#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	vector<string> v1(n);
	for (auto& i : v1) {
		cin >> i;
	}
	int res{};
	for (size_t i = 0; i < n; ++i) {
		int cnt{};
		for (size_t j = 0; j < v1[i].size(); ++j) {
			if (v1[i][j] == '4' || v1[i][j] == '7') {
				cnt++;
			}
		}
		if (cnt <= k) {
			res++;
		}
	}
	cout << res << "\n";
	return 0;
}