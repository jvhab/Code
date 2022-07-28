#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long d1, d2, d3;
	cin >> d1 >> d2 >> d3;
	long long mins = min(d1, d2);
	cout << min({ (d1 * 2 + d2 * 2), (d1 + d2 + d3), (mins * 2 + d3 * 2) });
	return 0;
}