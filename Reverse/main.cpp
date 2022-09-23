#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> v1(n);
	for (auto& i : v1) {
		cin >> i;
	}
	int mins{ 1 };
	for (size_t i = 0; i < n; ++i) {
		if (i == mins - 1 && v1[i] == mins) {
			mins++;
		}
		else {
			auto low = find(v1.begin(), v1.end(), mins);
			reverse(v1.begin() + i, low + 1);
			break;
		}
	}
	for (auto i : v1) {
		cout << i << " ";
	}
	cout << "\n";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}