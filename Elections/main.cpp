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
		int a, b, c;
		cin >> a >> b >> c;
		int max_a = max(0, max(b, c) + 1 - a);
		int max_b = max(0, max(a, c) + 1 - b);
		int max_c = max(0, max(b, a) + 1 - c);
		cout << max_a << " " << max_b << " " << max_c << "\n";
	}
	return 0;
}