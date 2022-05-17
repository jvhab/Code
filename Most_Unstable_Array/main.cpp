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
		if (n == 0) {
			cout << 0 << endl;
		}
		else if (n == 2) {
			cout << m << endl;
		}
		else {
			cout << min(2, n - 1) * m << endl;
		}
	}
	return 0;
}