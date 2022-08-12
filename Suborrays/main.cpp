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
		for (size_t i = 1; i <= n; ++i) {
			cout << (i) % n + 1 << " ";
		}
		cout << "\n";
		// For any operation OR we have max element in pair
		// 4 OR 5 == 5, 100 | 101
	}
	return 0;
}