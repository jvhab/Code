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
		bool flag = false;
		for (size_t i = 2; i < n; ++i) {
			if (v1[0] + v1[1] <= v1[i]) {
				cout << 1 << " " << 2 << " " << i + 1 << "\n";
				flag = true;
				break;
			}
		}
		if (!flag)
			cout << -1 << "\n";
	}
	return 0;
}