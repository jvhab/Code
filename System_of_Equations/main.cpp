#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	int res{};
	for (size_t i = 0; i < 101; ++i) {
		for (size_t j = 0; j < 101; ++j) {
			if (i * i + j == n && i + j * j == m) {
				res++;
			}
		}
	}
	cout << res << "\n";

	return 0;
}