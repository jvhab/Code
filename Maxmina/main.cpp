#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> v1(n);
	bool flag{ false };
	for (auto& i : v1) {
		cin >> i;
		if (i == 1) {
			flag = true;
		}
	}
	if (flag)
		cout << "YES" << "\n";
	else
		cout << "NO" << "\n";
	
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