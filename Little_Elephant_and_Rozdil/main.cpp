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
	vector<long long> v1(n);
	for (auto& i : v1) {
		cin >> i;
	}
	long long mins{LONG_MAX};
	bool flag{ false };
	int res{};
	for (size_t i = 0; i < n; i++) {
		if (v1[i] < mins) {
			mins = v1[i];
			res = i + 1;
			flag = false;
		}
		else if (mins == v1[i]) {
			flag = true;
		}
	}
	if (flag)
		cout << "Still Rozdil" << "\n";
	else
		cout << res << "\n";
	return 0;
}