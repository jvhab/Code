#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a1, a2, a3, b1, b2, b3;
	cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
	int n;
	cin >> n;
	int cup = a1 + a2 + a3;
	int medal = b1 + b2 + b3;
	int counts{};
	while (cup > 0) {
		cup -= 5;
		counts++;
	}
	while (medal > 0) {
		medal -= 10;
		counts++;
	}
	cout << (counts <= n ? "YES" : "NO") << "\n";
	return 0;
}