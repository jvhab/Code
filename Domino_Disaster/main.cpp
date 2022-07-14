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
		int n;
		cin >> n;
		string s;
		cin >> s;
		for (size_t i = 0; i < n; ++i) {
			switch (s[i]) {
			case 'L':
				cout << "L";
				break;
			case 'R':
				cout << "R";
				break;
			case 'U':
				cout << 'D';
				break;
			case 'D':
				cout << "U";
				break;
			}
		}
		cout << "\n";
	}
	return 0;
}