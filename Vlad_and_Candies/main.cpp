#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<long long> v1(n);
		for (auto& i : v1)
			cin >> i;
		sort(v1.begin(), v1.end(), [](auto a, auto b) {return a > b; });
		if (v1.size() > 1) {
			if (v1[0] - v1[1] <= 1)
				cout << "YES" << "\n";
			else
				cout << "NO" << "\n";
		}
		else {
			if (v1[0] > 1)
				cout << "NO" << "\n";
			else
				cout << "YES" << "\n";
		}
	}
	return 0;
}