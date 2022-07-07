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
		vector<int> v1(n);
		int res{};
		for (auto& i : v1)
			cin >> i;
		int temp = count(v1.begin(), v1.end(), 1);
		if (temp == 1) {
			cout << 0 << "\n";
			continue;
		}
		auto start = find(v1.begin(), v1.end(), 1);
		for (size_t i = n - 1; i != 0; --i) {
			if (v1[i] == 0)
				v1.pop_back();
			else {
				break;
			}
		}
		res = count(start, v1.end(), 0);


		cout << res << "\n";
	}
	return 0;
}