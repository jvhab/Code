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
		int s;
		cin >> s;
		int temp{ 1 };
		while (temp * temp < s)
			temp++;
		cout << temp << "\n";
	}

	return 0;
}