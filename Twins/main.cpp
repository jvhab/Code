#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int sums{};
	vector<int> v1(n);
	for (auto& i : v1) {
		cin >> i;
		sums += i;
	}
	sort(v1.begin(), v1.end(), greater<int>());
	int res{};
	int sums2{};
	for (size_t i = 0; i < n; ++i) {
		sums -= v1[i];
		sums2 += v1[i];
		res++;
		if (sums2 > sums) {
			break;
		}
	}
	cout << res << "\n";
	return 0;
}