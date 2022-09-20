#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	vector<int> down(n);
	vector<int> left(m);
	unordered_set<int> st1;
	for (auto& i : down) {
		cin >> i;
		st1.insert(i);
	}
	for (auto& i : left) {
		cin >> i;
		st1.insert(i);
	}
	cout << (down.size() + left.size() - st1.size()) << "\n";
	
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