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
		vector<int> v1(n);
		for (auto& i : v1)
			cin >> i;
		if (n < 2) {
			cout << -1 << "\n";
			continue;
		}
		sort(v1.begin(), v1.end());
		bool flag{ false };
		for (size_t i = 0; i < n - 2; ++i) {
			if (v1[i] == v1[i + 1] && v1[i] == v1[i + 2]) {
				cout << v1[i] << "\n";
				flag = true;
				break;
			}
		}
		if (!flag)
			cout << -1 << "\n";
	}
	return 0;
}