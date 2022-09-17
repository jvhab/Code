#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, q;
	cin >> n >> q;
	string s;
	cin >> s;
	vector<int> v1(n + 1);
	for (size_t i = 0; i < n; ++i) {
		v1[i + 1] = v1[i] + (s[i] - 'a' + 1);
	}
	/*for (auto i : v1)
		cout << i << " ";
	cout << endl;*/
	int l, r;
	int res{};
	for (size_t i = 0; i < q; ++i) {
		cin >> l >> r;
		cout << v1[r] - v1[l - 1] << "\n";
	}

	return 0;
}