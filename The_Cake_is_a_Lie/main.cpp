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
		int n, m, k;
		cin >> n >> m >> k;
		if (n * m - 1 == k)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}

	return 0;
}