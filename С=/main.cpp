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
		int a, b, n;
		cin >> a >> b >> n;
		int res{};
		int temp{};
		while (temp < 44) {
			temp++;
			if (a <= b) {
				a += b;
				res++;
			}
			else if (b <= a) {
				b += a;
				res++;
			}
			if (a > n || b > n)
				break;
		}
		cout << res << "\n";
	}
	return 0;
}