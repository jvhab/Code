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
	int res1{}, res2{};
	vector<int> resall;
	for (int i = 0; i < n - 1; i++) {
		res2++;
		if (v1[i + 1] <= v1[i]) {
			res1++;
			resall.push_back(res2);
			res2 = 0;
		}
	}
	if (v1[n - 1] - v1[n - 2] != 1 && res2 == 0) {
		res1++;
		res2++;
		resall.push_back(res2);
		res2 = 0;
	}
	if (res2 != 0) {
		res1++;
		res2++;
		resall.push_back(res2);
	}
	cout << res1 << "\n";
	for (auto i : resall)
		cout << i << " ";
	cout << "\n";
	return 0;
}