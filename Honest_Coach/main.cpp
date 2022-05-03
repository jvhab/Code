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
		vector<int> sp1(n);
		for (auto& i : sp1) {
			cin >> i;
		}
		sort(sp1.begin(), sp1.end());
		int result = sp1[sp1.size() - 1] - sp1[0];
		for (int i = 0; i < n; ++i) {
			for (int j = i + 1; j < n; ++j) {
				result = min(result, sp1[j] - sp1[i]);
			}
		}
		cout << result << endl;
	}
}