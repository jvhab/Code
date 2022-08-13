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
		vector<int> v1(n);
		for (auto& i : v1)
			cin >> i;
		int res{};
		for (size_t i = 0; i < k; ++i) {
			if (v1[i] > k) {
				res++;
			}
		}
		cout << res << "\n";
	}
	return 0;
}