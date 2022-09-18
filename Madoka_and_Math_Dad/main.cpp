#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int res{};
	int i{};
	if (n == 1) {
		cout << 1 << "\n";
		return;
	}
	if (n == 2) {
		cout << 2 << "\n";
		return;
	}
	if (n % 3 == 0 || n % 3 == 2) {
		while (res < n) {
			if (i % 2 == 0) {
				cout << 2;
				i++;
				res += 2;
			}
			else {
				cout << 1;
				i++;
				res += 1;
			}
		}
	}
	else {
		while (res < n) {
			if (i % 2 == 0) {
				cout << 1;
				i++;
				res += 1;
			}
			else {
				cout << 2;
				i++;
				res += 2;
			}
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