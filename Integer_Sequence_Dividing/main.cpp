#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	cin >> n;
	if ((n / 2 + n % 2) % 2 == 0) {
		cout << 0 << "\n";
	}
	else {
		cout << 1 << "\n";
	}
	return 0;
}