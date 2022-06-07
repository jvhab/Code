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
		int n;
		cin >> n;
		vector<int> a(n);
		vector<int> b(n);
		for (auto& i : a)
			cin >> i;
		for (auto& i : b)
			cin >> i;
		int max_a = *max_element(a.begin(), a.end());
		int max_b = *max_element(b.begin(), b.end());
		int c = max_a - max_b;
		bool flag = false;
		int temp{0};
		for (size_t i = 0; i < n; ++i) {
			if ((a[i] - b[i] >= 0) && ((a[i] - b[i] == c && c >= 0) || ((a[i] - c <= 0) && (b[i] == 0)))) {
				temp++;
			}
		}
		if (temp == n)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}
	return 0;
}