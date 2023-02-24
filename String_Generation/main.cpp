#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	string res;
	int temp{};
	for (size_t i = 0; i < n; ++i) {
		if (temp == 0) {
			temp++;
			res += 'b';
		}
		else if (temp == 1) {
			temp++;
			res += 'c';
		}
		else {
			temp = 0;
			res += 'a';
		}
	}
	cout << res << "\n";
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