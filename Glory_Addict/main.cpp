#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> b(n);
	int count_fire{};
	int count_cold{};
	for (auto& i : a) {
		cin >> i;
		if (i == 0)
			count_fire++;
		else
			count_cold++;
	}
	for (auto& i : b) {
		cin >> i;
	}
	vector<vector<long long>> v(2);
	for (int i = 0; i < n; ++i)
		v[a[i]].push_back(b[i]);
	for (int i = 0; i < 2; ++i)
		sort(v[i].begin(), v[i].end());

	auto go = [&]()
	{
		long long res = 0;
		if (v[0].size() == v[1].size())
			res -= min(v[0].front(), v[1].front());
		while (!v[0].empty() && !v[1].empty())
		{
			res += (v[0].back() + v[1].back()) * 2;
			v[0].pop_back();
			v[1].pop_back();
		}
		for (auto x : v[0]) res += x;
		for (auto x : v[1]) res += x;
		return res;
	};
	cout << go() << "\n";

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