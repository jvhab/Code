#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <unordered_map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> result;
		vector<int> temp(2 * n);
		vector<int> prom(n);
		for (auto& it : temp)
			cin >> it;
		for (size_t i = 0; i < 2 * n; ++i) {
			if (prom[temp[i] - 1] == 0) {
				prom[temp[i] - 1] = temp[i];
				result.push_back(temp[i]);
			}
		}
		for (auto i : result)
			cout << i << " ";
		cout << "\n";
	}
	return 0;
}