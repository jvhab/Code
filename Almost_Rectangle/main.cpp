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
		vector<vector<char>> v1(n);
		vector<pair<int, int>> stars;
		for (size_t i = 0; i < n; ++i) {
			for (size_t j = 0; j < n; ++j) {
				char temp;
				cin >> temp;
				v1[i].push_back(temp);
				if (temp == '*') {
					stars.push_back({ i, j });
				}
			}
		}
		//cout << "\n";

		if (stars[0].first == stars[1].first) {
			v1[(stars[0].first + 1) % n][stars[0].second] = '*';
			v1[(stars[1].first + 1) % n][stars[1].second] = '*';
		}
		else if (stars[0].second == stars[1].second) {
			v1[stars[0].first][(stars[0].second + 1) % n] = '*';
			v1[stars[1].first][(stars[1].second + 1) % n] = '*';
		}
		else {
			v1[stars[0].first][stars[1].second] = '*';
			v1[stars[1].first][stars[0].second] = '*';
		}

		for (size_t i = 0; i < n; ++i) {
			for (size_t j = 0; j < n; ++j) {
				cout << v1[i][j];
			}
			cout << "\n";
		}

		//cout << "\n";
		//cout << "\n";

	}
	return 0;
}