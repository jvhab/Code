#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n;
	cin >> n;
	string res;
	bool flag = false;
	vector<string> v1(n - 2);
	for (auto& i : v1) {
		cin >> i;
	}
	if (n == 3) {
		cout << v1[0] + v1[0][0] << "\n";
		return;
	}
	for (size_t i = 0; i < n - 3; ++i) {
		if (v1[i][1] != v1[i + 1][0]) {
			string temp = string(1, v1[i][1]);
			string temp2 = string(1, v1[i + 1][0]);
			string pp = temp + temp2;
			v1.insert(v1.begin() + i + 1, pp);
			flag = true;
		}
	}
	for (auto i : v1) {
		res += i[0];
	}
	if (res.size() == n - 1) {
		res += v1[v1.size() - 1][1];
		cout << res << "\n";
	}
	if (!flag) {
		res += v1[v1.size() - 1];
		cout << res << "\n";
	}
	/*for (auto i : v1)
		cout << i << " ";
	cout << "\n";*/
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}