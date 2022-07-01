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
		long long n, m, x;
		cin >> n >> m >> x;
		x--;
		long long col = x / n;
		long long row = x % n;
		cout << row * m + col + 1 << "\n";
	}
	return 0;
}