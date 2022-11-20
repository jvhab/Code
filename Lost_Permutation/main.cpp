#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;

void solve() {
	int m, s;
	cin >> m >> s;
	vector<int> v1(m);
	unordered_set<int> st1;
	int sums{};
	for (auto& i : v1) {
		cin >> i;
		sums += i;
		st1.insert(i);
	}
	sums += s;
	for (int i = 1; ; ++i) {
		if (st1.find(i) == st1.end()) {
			s -= i;
		}
		else {
			st1.erase(i);
		}
		if (s < 0) {
			cout << "NO" << "\n";
			return;
		}
		else if (s == 0 && st1.size() == 0) {
			cout << "YES" << "\n";
			return;
		}

	}

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