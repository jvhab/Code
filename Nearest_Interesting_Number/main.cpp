#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a;
	cin >> a;
	int sums = a % 10 + (a / 10) % 10 + (a / 100) % 10 + (a / 1000) % 10;
	if (sums % 4 == 0)
		cout << a << "\n";
	else {
		while (sums % 4 != 0) {
			a++;
			sums = a % 10 + (a / 10) % 10 + (a / 100) % 10 + (a / 1000) % 10;
		}
		cout << a << "\n";
	}
	return 0;
}