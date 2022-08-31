#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int s;
	cin >> s;
	string res;
	int temp{};
	int counts{ 1 };
	for (size_t i = 9; i != 0; --i) {
		if (s >= i) {
			res = to_string(i) + res;
			s -= i;
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