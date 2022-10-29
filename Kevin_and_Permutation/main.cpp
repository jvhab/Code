#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int temp = n / 2 + 1;
	int temp2 = 1;
	for (size_t i = 0; i < n; ++i) {
		if (i % 2 == 0) {
			cout << temp << " ";
			temp++;
		}
		else {
			cout << temp2 << " ";
			temp2++;
		}
	}
	cout << "\n";
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