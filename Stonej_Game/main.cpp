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
		int maxPos = max_element(v1.begin(), v1.end()) - v1.begin();
		int minPos = min_element(v1.begin(), v1.end()) - v1.begin();
		cout << min({
			max(maxPos, minPos) + 1,
			(n - 1) - min(maxPos, minPos) + 1,
			(n - 1) - maxPos + minPos + 2,
			(n - 1) - minPos + maxPos + 2
			}) << "\n";
	}
	return 0;
}