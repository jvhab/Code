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
	vector<string> st(n);
	bool flag = false;
	for (auto& i : st)
		cin >> i;
	for (size_t i = 0; i < n; ++i) {
		if (st[i][0] == 'O' && st[i][1] == 'O') {
			cout << "YES" << "\n";
			st[i][0] = '+';
			st[i][1] = '+';
			flag = true;
			for (auto j : st)
				cout << j << "\n";
			break;
		}
		if (st[i][3] == 'O' && st[i][4] == 'O') {
			cout << "YES" << "\n";
			st[i][3] = '+';
			st[i][4] = '+';
			flag = true;
			for (auto j : st)
				cout << j << "\n";
			break;
		}
	}
	if (!flag) {
		cout << "NO" << "\n";
	}

	return 0;
}