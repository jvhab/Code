#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<long long> a(n);
	vector<long long> b(n);
	long long res{};
	for (auto& i : a) {
		cin >> i;
		res += i;
	}
	for (auto& i : b) {
		cin >> i;
		res += i;
	}
	long long max_b = *(max_element(b.begin(), b.end()));
	res -= max_b;
	cout << res << "\n";
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