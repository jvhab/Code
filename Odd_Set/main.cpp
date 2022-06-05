#include <iostream>
#include <string>
#include <vector>
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
		n = 2 * n;
		vector<int> v1(n);
		for (auto& i : v1)
			cin >> i;
		int a{};
		int b{};
		for (size_t i = 0; i < n; ++i) {
			if (v1[i] % 2 == 0)
				a++;
			else if (v1[i] % 2 != 0)
				b++;
		}
		if (a == b)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}
	return 0;
}