#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long a, b;
	cin >> a >> b;
	long long temp{1};
	if (a < b) {
		for (size_t i = 1; i <= a; ++i) {
			temp *= i;
		}
		cout << temp << "\n";
	}
	else {
		for (size_t i = 1; i <= b; ++i) {
			temp *= i;
		}
		cout << temp << "\n";
	}
	return 0;
}