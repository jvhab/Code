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
		vector<string> v1(8);
		for (auto& i : v1)
			cin >> i;
		for (size_t i = 1; i < 7; ++i) {
			for (size_t j = 1; j < 7; ++j) {
				if (v1[i - 1][j - 1] == '#' && v1[i - 1][j + 1] && v1[i + 1][j - 1] == '#' && v1[i + 1][j + 1] == '#') {
					cout << i + 1 << " " << j + 1 << "\n";
					break;
				}
			}
		}
	}

	return 0;
}