#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	char a;
	bool flag = false;
	for (int i = 0; i < n; ++i) {
		if (flag)
			break;
		for (int j = 0; j < m; ++j) {
			cin >> a;
			if (a == 'C' || a == 'M' || a == 'Y') {
				flag = true;
				break;
			}
		}
	}
	if (flag)
		cout << "#Color";
	else
		cout << "#Black&White";

	return 0;
}