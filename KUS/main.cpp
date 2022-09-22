#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	long long n;
	cin >> n;
	if (n == 1 || n == 0 || n == 2) {
		cout << 4 - n << "\n";
		return;
	}
	if (n % 2 == 0) {
		cout << 0 << "\n";
		return;
	}
	else {
		cout << 1 << "\n";
		return;
	}

}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while (q--) {
		solve();
	}
	return 0;
}