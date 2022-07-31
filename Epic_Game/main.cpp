#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;

int gcd(int a, int b) {
	if (a == 0)
		return b;
	else if (b == 0)
		return a;
	else if (a == b)
		return a;
	else if (a > b) {
		a = a % b;
		return gcd(a, b);
	}
	else if (b > a) {
		b = b % a;
		return gcd(a, b);
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a, b, n;
	cin >> a >> b >> n;
	int temp{};
	while (n >= 0) {
		temp++;
		if ((temp & 1) == 0)
			n -= gcd(b, n);
		else
			n -= gcd(a, n);
	}
	if ((temp & 1) == 0)
		cout << 0 << "\n";
	else
		cout << 1 << "\n";

	return 0;
}