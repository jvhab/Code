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
		int n;
		cin >> n;
		vector<int> v1(n, n);
		for (auto& i : v1)
			cout << i << " ";
		cout << "\n";
	}

	return 0;
}