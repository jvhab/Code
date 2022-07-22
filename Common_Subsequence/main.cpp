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
		vector<int> a(n);
		vector<int> b(m);
		for (auto& i : a)
			cin >> i;
		for (auto& i : b)
			cin >> i;
		bool flag{ false };
		for (auto i : a) {
			if (find(b.begin(), b.end(), i) != b.end()) {
				cout << "YES" << "\n" << 1 << " " << i << "\n";
				flag = true;
				break;
			}
		}
		if (!flag)
			cout << "NO" << "\n";
	}
	return 0;
}