#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

void solve() {
	int n;
	cin >> n;
	map<int, int> mp1;
	set<int> st1;
	int temp{};
	for (size_t i = 0; i < n; ++i) {
		int a;
		cin >> a;
		if (st1.find(a) == st1.end()) {
			st1.insert(a);
		}
		else {
			a++;
			st1.insert(a);
		}
	}
	cout << st1.size() << "\n";
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