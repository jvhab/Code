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
		vector<int> s(4);
		for (auto& it : s)
			cin >> it;
		if (s[0] > s[1] && s[1] > s[2] && s[1] > s[3])
			cout << "NO" << "\n";
		else if (s[0] < s[1] && s[0] > s[2] && s[0] > s[3])
			cout << "NO" << "\n";
		else if (s[2] > s[3] && s[3] > s[0] && s[3] > s[1])
			cout << "NO" << "\n";
		else if (s[2] < s[3] && s[2] > s[1] && s[2] > s[0])
			cout << "NO" << "\n";
		else
			cout << "YES" << "\n";
	}
	return 0;
}