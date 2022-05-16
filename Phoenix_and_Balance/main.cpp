#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<long> v1(n);
		v1[0] = 2;
		long two = 2;
		for (int i = 1; i < n; ++i) {
			two *= 2;
			v1[i] = two;
		}
		long a{}, b{};
		a = v1[v1.size() - 1];
		for (size_t i = 1; i < n / 2; ++i) {
			a += pow(2, i);
		}
		for (size_t i = n / 2; i < n; ++i) {
			b += pow(2, i);
		}
		cout << abs(a - b) << endl;
	}
	return 0;
}