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
		int ans{};
		vector<int> v1(n);
		for (auto& i : v1)
			cin >> i;
		for (size_t i = 0; i < n - 1; ++i) {
			int a = max(v1[i], v1[i + 1]);
			int b = min(v1[i], v1[i + 1]);
			while (b * 2 < a) {
				ans++;
				b = b * 2;
			}
		}
		cout << ans << "\n";
	}

	return 0;
}