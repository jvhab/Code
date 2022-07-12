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
		string s2;
		for (auto i : s)
			s2 += tolower(i);
		if (s2 == "yes")
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}

	return 0;
}