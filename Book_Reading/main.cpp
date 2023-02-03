#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, t;
	cin >> n >> t;
	vector<int> v1(n);
	for (auto& i : v1) {
		cin >> i;
	}
	int res{};
	for (size_t i = 0; i < n; i++) {
		t -= (86400 - v1[i]);
		res++;
		if (t <= 0) {
			cout << res << "\n";
			break;
		}
	}

	return 0;
}