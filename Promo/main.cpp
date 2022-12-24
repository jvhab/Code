#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, q;
	cin >> n >> q;
	vector<long long> v1(n);
	vector<long long> s(n + 1);
	for (auto& i : v1) {
		cin >> i;
	}
	sort(v1.begin(), v1.end());
	for (int i = 0; i < n; i++) {
		s[i + 1] = s[i] + v1[i];
	}
	for (int i = 0; i < q; i++) {
		int x, y;
		cin >> x >> y;
		cout << s[n - x + y] - s[n - x] << "\n";
	}
	return 0;
}