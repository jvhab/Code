#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	long long n, m;
	cin >> n >> m;
	if ((n + m) % 2 == 0)
		cout << "Tonya" << "\n";
	else
		cout << "Burenka" << "\n";
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