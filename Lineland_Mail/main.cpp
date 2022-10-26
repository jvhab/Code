#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<long long> v1(n);
	for (auto& i : v1) {
		cin >> i;
	}
	for (size_t i = 0; i < n; ++i) {
		if (i == 0) {
			cout << abs(v1[i] - v1[i + 1]) << " " << abs(v1[i] - v1[n - 1]) << "\n";
		}
		else if (i == n - 1) {
			cout << abs(v1[i] - v1[i - 1]) << " " << abs(v1[i] - v1[0]) << "\n";
		}
		else {
			cout << min(abs(v1[i] - v1[i - 1]), abs(v1[i] - v1[i + 1])) << " " << max(abs(v1[i] - v1[0]), abs(v1[i] - v1[n - 1])) << "\n";
		}
	}
	return 0;
}