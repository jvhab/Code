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
		long long res = 0;
		int aMin = *min_element(a.begin(), a.end());
		int bMin = *min_element(b.begin(), b.end());
		for (int i = 0; i < n; ++i) {
			res += max(a[i] - aMin, b[i] - bMin);
		}
		cout << res << endl;
	}
}