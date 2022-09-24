#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int temp{};
	for (int i = 0; i < n; ++i) {
		temp = i;
		for (int j = 0; j < n; ++j) {
			if (j >= i) {
				cout << "()";
			}
			else {
				cout << "(";
			}
		}
		while (temp > 0) {
			temp--;
			cout << ")";
		}
		cout << "\n";
	}
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