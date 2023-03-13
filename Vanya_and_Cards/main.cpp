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
	int x;
	cin >> x;
	vector<int> v1(n);
	int res{};
	for (auto& i : v1) {
		cin >> i;
		res += i;
	}
	if (res == 0) {
		cout << 0 << "\n";
		return 0;
	}
	if (abs(res) <= x) {
		cout << 1 << "\n";
	}
	else {
		if (abs(res) % x == 0) {
			cout << abs(res) / x << "\n";
		}
		else {
			cout << abs(res) / x + 1 << "\n";
		}
	}
	return 0;
}