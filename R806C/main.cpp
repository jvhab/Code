#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
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
		for (auto& i : v1)
			cin >> i;
		vector<int> code;
		for (size_t i = 0; i < n; ++i) {
			int b;
			cin >> b;
			int counts{};
			for (size_t j = 0; j < b; ++j) {
				char c;
				cin >> c;
				if (c == 'D') {
					counts++;
				}
				if (c == 'U') {
					counts--;
				}
			}
			code.push_back(counts);
		}
		for (size_t i = 0; i < n; ++i) {
			if (v1[i] + code[i] >= 10) {
				cout << code[i] - (10 - v1[i]) << " ";
			}
			else if (v1[i] + code[i] < 0) {
				cout << 10 + (v1[i] + code[i]) << " ";
			}
			else {
				cout << v1[i] + code[i] << " ";
			}
		}
		cout << "\n";

	}

	return 0;
}