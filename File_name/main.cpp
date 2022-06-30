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
	string s;
	cin >> s;
	int temp{};
	int res{};
	for (size_t i = 0; i < n; ++i) {
		if (s[i] == 'x') {
			temp++;
			if (temp == 3) {
				res++;
				temp--;
			}
		}
		else {
			temp = 0;
		}
	}
	cout << res << "\n";
	return 0;
}