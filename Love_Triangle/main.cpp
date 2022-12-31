#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <unordered_set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> v1(n + 1);
	for (size_t i = 1; i <= n; i++) {
		int a;
		cin >> a;
		v1[i] = a;
	}
	for (size_t i = 1; i <= n; i++) {
		if (v1[v1[v1[i]]] == i) {
			cout << "YES" << "\n";
			return 0;
		}
	}
	cout << "NO" << "\n";
	return 0;
}