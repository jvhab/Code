#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	for (size_t i = 0; i < s.size(); ++i) {
		if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
			cout << "YES" << "\n";
			return 0;
		}
	}
	cout << "NO" << "\n";
	return 0;
}