#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	unordered_map<int, int> mp1;
	for (size_t i = 0; i < n; i++) {
		int a;
		cin >> a;
		mp1[a] = i + 1;
	}
	if (mp1.size() < k) {
		cout << "NO" << "\n";
	}
	else {
		cout << "YES" << "\n";
		for (auto i : mp1) {
			if (k != 0) {
				k--;
				cout << i.second << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}