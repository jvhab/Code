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
		int sums = ((s[0] - '0') - ('a' - '0')) * 25 + abs(('a' - '0') - (s[1] - '0'));
		if (s[1] < s[0])
			sums++;
		cout << sums << "\n";
	}
	return 0;
}