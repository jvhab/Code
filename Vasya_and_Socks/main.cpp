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
	int count_day{0};
	for (int i = 0; i < n; ++i) {
		res++;
		count_day++;
		if (count_day == m) {
			i--;
			count_day = 0;
		}
	}
	cout << res << "\n";
	return 0;
}