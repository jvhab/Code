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
	if (n == 1 || n % 2 == 1)
		cout << -1;
	else {
		vector<int> v1(n);
		int k = 1;
		for (auto& it : v1) {
			it = k;
			k++;
		}
		for (size_t i = 0; i < n; i += 2) {
			swap(v1[i], v1[i + 1]);
		}
		for (auto i : v1)
			cout << i << " ";
	}


	return 0;
}