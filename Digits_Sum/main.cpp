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
		cout << (n + 1) / 10 << "\n";
	}

	return 0;
}