#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a, b;
	cin >> a >> b;
	int res1{}, res2{}, res3{};
	for (int i = 1; i <= 6; i++) {
		if (abs(i - a) < abs(i - b)) {
			res1++;
		}
		else if (abs(i - a) > abs(i - b)) {
			res3++;
		}
		else {
			res2++;
		}
	}
	cout << res1 << " " << res2 << " " << res3 << "\n";
	return 0;
}