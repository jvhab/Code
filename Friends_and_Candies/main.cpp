#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> candy(n);
		for (auto& i : candy)
			cin >> i;
		int sums{};
		sums = accumulate(candy.begin(), candy.end(), 0);
		int means = sums / n;
		int res{};
		int mins{};
		int maxs{};
		for (size_t i = 0; i < n; ++i) {
			if (candy[i] < means) {
				mins += means - candy[i];
			}
			else if (candy[i] > means) {
				maxs += candy[i] - means;
				res++;
			}
		}
		if (mins - maxs == 0)
			cout << res << "\n";
		else
			cout << -1 << "\n";
	}

	return 0;
}