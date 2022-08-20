#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	string s;
	cin >> s;
	int counts{};
	vector<int> res;
	for (size_t i = 0; i < s.size(); ++i) {
		if (s[i] == '1') {
			counts++;
		}
		if (s[i] == '0') {
			if (counts != 0)
				res.push_back(counts);
			counts = 0;
		}
	}
	if (counts > 0)
		res.push_back(counts);
	sort(res.begin(), res.end(), [](int a, int b) {return a > b; });
	int sums{};
	for (size_t i = 0; i < res.size(); ++i) {
		if (i % 2 == 0)
			sums += res[i];
	}
	cout << sums << "\n";
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