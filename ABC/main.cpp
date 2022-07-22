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
		if (n == 1) {
			cout << "YES" << "\n";
		}
		else if (n == 2) {
			if (s[0] != s[1]) {
				cout << "YES" << "\n";
			}
			else {
				cout << "NO" << "\n";
			}
		}
		else {
			cout << "NO" << "\n";
		}
	}
	return 0;
}