#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int lead{};
	for (int i = 1; i < n; ++i) {
		if ((n - i) % i == 0)
			lead++;
	}
	cout << lead << "\n";
	return 0;
}