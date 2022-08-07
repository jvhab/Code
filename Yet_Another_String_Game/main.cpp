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
		string s;
		cin >> s;
		for (size_t i = 0; i < s.size(); ++i) {
			if (i % 2 == 0) {
				if (s[i] != 'a')
					cout << 'a';
				else
					cout << 'b';
			}
			else {
				if (s[i] != 'z')
					cout << 'z';
				else
					cout << 'y';
			}
		}
		cout << "\n";
	}
	return 0;
}