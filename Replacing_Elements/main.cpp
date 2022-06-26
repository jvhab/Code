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
		int n, d;
		cin >> n >> d;
		vector<int> v1(n);
		for (auto& i : v1)
			cin >> i;
		sort(v1.begin(), v1.end());
		if (v1[v1.size() - 1] <= d) {
			cout << "YES" << "\n";
		}
		else {
			if (v1[0] + v1[1] <= d) {
				cout << "YES" << "\n";
			}
			else {
				cout << "NO" << "\n";
			}
		}
	}

	return 0;
}