#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int k;
	cin >> k;
	vector<int> v1(12);
	for (auto& i : v1) {
		cin >> i;
	}
	sort(v1.begin(), v1.end(), greater<int>{});
	int res{};
	int temp{};
	for (size_t i = 0; i < 12; ++i) {
		if (temp >= k)
			break;
		temp += v1[i];
		res++;
	}
	if (temp < k) {
		cout << -1 << "\n";
	}
	else
		cout << res << "\n";
	return 0;
}