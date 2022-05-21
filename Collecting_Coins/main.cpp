#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int a, b, c, n;
		cin >> a >> b >> c >> n;
		vector<int> v1;
		v1.push_back(a);
		v1.push_back(b);
		v1.push_back(c);
		sort(v1.begin(), v1.end());
		int temp = (v1[2] - v1[1]) + (v1[2] - v1[0]);
		if ((n - temp) % 3 == 0 && n >= temp && n - temp >= 0) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}