#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long n, c;
	cin >> n >> c;
	vector<long long> v1(n);
	for (auto& i : v1) {
		cin >> i;
	}
	int res{1};
	for (int i = n - 1; i > 0; --i) {
		if (v1[i] - v1[i - 1] <= c) {
			res++;
		}
		else {
			break;
		}
	}
	cout << res << "\n";
	return 0;
}