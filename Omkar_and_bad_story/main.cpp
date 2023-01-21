#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> v1(n);
	unordered_set<int> st;
	bool flag{ false };
	for (auto& i : v1) {
		cin >> i;
		if (i < 0) {
			flag = true;
		}
		st.insert(i);
	}
	if (flag) {
		cout << "NO" << "\n";
		return;
	}
	cout << "YES" << "\n";
	cout << 101 << "\n";
	for (size_t i = 0; i <= 100; i++) {
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