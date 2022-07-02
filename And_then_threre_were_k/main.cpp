#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;
		int temp{};
		while (n != 0) {
			temp++;
			n /= 2;
		}
		cout << (1 << (temp - 1)) - 1 << "\n";
	}
	return 0;
}