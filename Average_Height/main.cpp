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
		vector<int> v1(n);
		for (auto& i : v1)
			cin >> i;
		vector<int> res;
		vector<int> temp;
		for (auto i : v1) {
			if (i % 2 == 0) {
				res.push_back(i);
			}
			else {
				temp.push_back(i);
			}
		}
		res.insert(res.end(), temp.begin(), temp.end());
		for (auto i : res)
			cout << i << " ";
		cout << "\n";
	}
	return 0;
}