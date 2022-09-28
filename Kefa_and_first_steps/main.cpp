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
	int res{ 1 };
	for (auto& i : v1) {
		cin >> i;
	}
	int temp{1};
	for (size_t i = 0; i < n - 1 ; ++i) {
		if (v1[i + 1] >= v1[i]) {
			temp++;
		}
		else {
			res = max(res, temp);
			temp = 1;
		}
	}
	if (temp > 1) {
		res = max(res, temp);
	}
	cout << res << "\n";
	return 0;
}