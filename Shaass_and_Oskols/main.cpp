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
	vector<int> v1(100);
	for (int i = 1; i <= n; ++i) {
		cin >> v1[i];
	}
	int m;
	cin >> m;
	int x, y;
	for (int i = 1; i <= m; i++) {
		cin >> x >> y;
		v1[x - 1] += y - 1;
		v1[x + 1] += v1[x] - y;
		v1[x] = 0;
	}
	for (int i = 1; i <= n; i++)
		cout << v1[i] << endl;

	return 0;
}