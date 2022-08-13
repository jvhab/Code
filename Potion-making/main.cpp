#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int my_gcd(int a, int b) {
	if (a == 0)
		return b;
	else if (b == 0)
		return a;
	else if (a > b) {
		a = a % b;
		my_gcd(a, b);
	}
	else if (b > a) {
		b = b % a;
		my_gcd(a, b);
	}
	else if (a == b)
		return a;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int k;
		cin >> k;
		cout << 100 / my_gcd(k, 100) << "\n";
	}
	return 0;
}