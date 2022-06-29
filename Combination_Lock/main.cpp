#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	string a, b;
	cin >> a >> b;
	int res{};
	for (size_t i = 0; i < n; ++i) {
		res += min({ abs(a[i] - b[i]), 10 - abs((a[i] - b[i])) });
	}
	cout << res << "\n";
	return 0;
}