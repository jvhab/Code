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
		int n, m;
		cin >> n >> m;
		if (n % m == 0)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}
	return 0;
}