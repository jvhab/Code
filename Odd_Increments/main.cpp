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
		vector<int> v1(n);
		for (auto& i : v1)
			cin >> i;
		int a{}, b{}, c{}, d{};
		for (size_t i = 0; i < n; ++i) {
			if (i % 2 == 0) {
				if (v1[i] % 2 == 0) {
					a = 1;
				}
				else
					b = 1;
			}
			else {
				if (v1[i] % 2 == 0) {
					c = 1;
				}
				else {
					d = 1;
				}
			}
		}
		if (a && b)
			cout << "NO" << "\n";
		else if (c && d)
			cout << "NO" << "\n";
		else
			cout << "YES" << "\n";
		
	}
	return 0;
}