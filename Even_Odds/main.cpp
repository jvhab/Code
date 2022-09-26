#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long n, k;
	cin >> n >> k;
	long long res{};
	long long one_1 = n / 2 + n % 2;
	long long two_2 = n - one_1;
	if (k <= one_1) {
		long long res{1};
		for (long long i = 1; i < k; ++i) {
			res += 2;
		}
		cout << res << "\n";
	}
	else {
		for (long long i = 0; i < k - one_1; ++i) {
			res += 2;
		}
		cout << res << "\n";
	}
	return 0;
}