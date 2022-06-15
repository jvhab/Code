#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (auto& i : a)
			cin >> i;
		map<int, int> mp;
		for (size_t i = 0; i < n; ++i) {
			mp[a[i]]++;
		}
		if (n % 2 == 0 && mp.size() % 2 == 0)
			cout << mp.size() << "\n";
		else if (n % 2 != 0 && mp.size() % 2 != 0)
			cout << mp.size() << "\n";
		else if (n % 2 != 0 && mp.size() % 2 == 0)
			cout << mp.size() - 1 << "\n";
		else if (n % 2 == 0 && mp.size() % 2 != 0)
			cout << mp.size() - 1 << "\n";
	}
	return 0;
}