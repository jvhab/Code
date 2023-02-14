#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	vector<pair<int, int>> v1(n);
	map<int, int> mp1;
	for (auto& i : v1) {
		cin >> i.first >> i.second;
		for (int j = i.first; j <= i.second; ++j) {
			mp1[j]++;
		}
	}
	cout << m - mp1.size() << "\n";
	for (int i = 1; i <= m; ++i) {
		if (mp1.find(i) == mp1.end()) {
			cout << i << " ";
		}
	}
}