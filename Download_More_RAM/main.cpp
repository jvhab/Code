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
		int n, k;
		cin >> n >> k;
		vector<pair<int, int>> v1;
		for (size_t i = 0; i < n; ++i) {
			int a;
			cin >> a;
			v1.push_back({ a, 0 });
		}
		for (size_t i = 0; i < n; ++i) {
			int a;
			cin >> a;
			v1[i].second = a;
		}
		int res{ k };
		sort(v1.begin(), v1.end(), [](pair<int, int> a, pair<int, int> b) {return a.first < b.first; });
		for (size_t i = 0; i < n; ++i) {
			if (res >= v1[i].first) {
				res += v1[i].second;
			}
		}
		cout << res << "\n";
	}
	return 0;
}