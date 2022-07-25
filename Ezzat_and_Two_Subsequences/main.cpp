#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		double n;
		cin >> n;
		vector<double> v1(n);
		double sums{};
		for (auto& i : v1) {
			cin >> i;
			sums += i;
		}

		double res = *max_element(v1.begin(), v1.end());
		res = (sums - res) / (n - 1.0) + res;
		cout << setprecision(9) << res << "\n";
	}
	return 0;
}